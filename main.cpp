#include <iostream>
#include <string>
#include <ctype.h>

#include "SpeechAnalysis.h"

using namespace std;

int main()
{
    string speech;      //User's input
    string* words;      //User's input broken into words
    int words_num;      //Amount of words in User's input
    int sentence_type;  //We need it to understand how to work with speech

    //Some pre-. "Be correct", "put dots", etc
    cout << "Hello! Let's begin our conversation.\n"
         << "Please, enter everything correctly. Mistakes may cause some troubles,\n"
         << "I will probably misunderstand you. Please, always put punctuation marks.\n"
         << "Do not write long sentences [more than 5 words till now].\n"
         << "Write just one sentence [temporarily]. You start.\n";

    //Getting User's sentence. Sentence must be correct now.
    speech = UserSpeech();                  //getting User's input
    words = SToWords(speech);               //breaking sentence into words
    words_num = WordsNum(speech);           //counting words
    WordsPrepare(words, words_num);         //Preparing words for searching in memory for coincidence

    //Analyzing sentence.

    //testing
    //sentence_type = SpeechType(speech, words, words_num);
    //cout << sentence_type;

    /*
    //test print
    for(int i = 0; i < words_num; i++)
        cout << "[" << i << "]\t" << words[i] << "\n";
    */

    //LOOK FOR ARROW IN USERSPEECH

    //first check for punctuation, second - if word exist (no 'strange' symbols)
}

