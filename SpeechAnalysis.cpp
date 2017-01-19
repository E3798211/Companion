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

    std::cout << "\n\t -> ";
    std::getline(std::cin, str);

    //Check if everything is ok and correcting User's sentence.
    do{
        status = IsCorrect(str);

        if(status == 1){
            std::cout << "\nPlease, do not send empty messages.\n";
            std::cout << "\n\t -> ";
            std::getline(std::cin, str);
        }else if(status == 2){
            std::cout << "\nPlease, put punctuation mark to the end.\n";
            std::cout << "\n\t -> ";
            std::getline(std::cin, str);
        }else if(status == 3){
            std::cout << "\nPlease, start message with letter.\n";
            std::cout << "\n\t -> ";
            std::getline(std::cin, str);
        }

    }while(status != 0);

    return str;
}

std::string* SToWords(std::string str)
{
    std::string* words = new std::string [50];    //50 - to be sure

    int word_counter = 0;
    int char_counter = 0;
    bool status;    //true - previous was char, false - previous was special symbol
    char buff[100];

    std::string::iterator iter = str.begin();
    while(iter != str.end()){
        if(isalnum(*iter)){
            //add to word
            buff[char_counter] = *iter;
            char_counter++;
            status = true;
        }else if(isspace(*iter) || isprint(*iter)){
            //next word
            if(status == true){
                words[word_counter].assign(buff, char_counter);
                word_counter++;
                char_counter = 0;
            }
            status = false;
        }else{
            //FIXME
        }
        iter++;
    };

    return words;
}

int WordsNum(std::string str)
{
    int words_amount = 0;
    std::string::iterator iter = str.begin();

    bool status;    //true - previous was char, false - previous was special symbol

    while(iter != str.end()){
        if(isalnum(*iter)){
            status = true;
        }else if(isspace(*iter) || isprint(*iter)){
            //new word appeared
            if(status == true){
                words_amount++;
            }
            status = false;
        }
        iter++;
    }
    return words_amount;
}


void WordsPrepare(std::string* & words, int words_amount)
{
    for(int i = 0; i < words_amount; i++){
        for(int k = 0; k < words[i].length(); k++)
            words[i].at(k) = tolower(words[i].at(k));
    }
}

