#include "SpeechAnalysis.h"
#include <iostream>
#include <string>
#include <ctype.h>

int IsCorrect(std::string str)
{
    std::string::iterator ending = str.end() - 1;

    if(str.empty()) return 1;       //Empty message
    if(*ending != '?' && *ending != '!' && *ending != '.') return 2;    //Message doesn't has ending

    ending = str.begin();
    if(!isalnum(*ending)) return 3; //Message begins not with char

    return 0;       //Everything is OK
}

std::string UserSpeech()
{
    std::string str;
    std::string::iterator iter;

    int status;
    int mistakes = 0;

    std::cout << "\n\t -> ";
    std::getline(std::cin, str);

    //Check if everything is ok and correcting User's sentence.
    do{
        status = IsCorrect(str);

        if(status == 1){
            std::cout << "\nPlease, do not send empty messages.\n";
            std::cout << "\n\t -> ";
            std::getline(std::cin, str);
        }
        if(status == 2){
            std::cout << "\nPlease, put lasting (?) to your sentence.\n";
            std::cout << "\n\t -> ";
            std::getline(std::cin, str);
        }
        if(status == 3){
            std::cout << "\nPlease, start message with alphabet.\n";
            std::cout << "\n\t -> ";
            std::getline(std::cin, str);
        }
        mistakes++;
        if(mistakes % 5 == 0)
            std::cout << "\nReally? So much? Do not hurry :)";
    }while(status != 0);

    return str;
}

std::string* SToWords(std::string str)
{
    //FIXME
}

int WordsNum(std::string str)
{
    //FIXME
}

