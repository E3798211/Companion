#ifndef SPEECHANALYSIS_H_INCLUDED
#define SPEECHANALYSIS_H_INCLUDED

#include <string>

std::string UserSpeech();                                       //Returns User's sentence
std::string* SToWords(std::string str);                         //Returns array of words
int WordsNum(std::string str);                                  //Returns amount of words
void WordsPrepare(std::string* & words, int words_amount);      //Prepare words. All "ToLower"
std::string GeneralAnalysis(std::string str, std::string* words,//Returns string with all info
                     int words_amount);                         //about sentence


int SpeechType(std::string str, std::string* words,                 //Service. Returns type of sentence
               int words_amount);
std::string ServiceAnalysis(std::string str, std::string* words,    //Service. Returns service info
                            int words_amount);
std::string QuestionAnalysis(std::string str, std::string* words,   //Service.
                             int words_amount);
std::string StatementAnalysis(std::string str, std::string* words,  //Service
                              int words_amount);

#endif // SPEECHANALYSIS_H_INCLUDED
