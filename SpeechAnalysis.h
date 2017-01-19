#ifndef SPEECHANALYSIS_H_INCLUDED
#define SPEECHANALYSIS_H_INCLUDED

#include <string>

std::string UserSpeech();                                       //Returns User's sentence
std::string* SToWords(std::string str);                         //Returns array of words
int WordsNum(std::string str);                                  //Returns amount of words
void WordsPrepare(std::string* & words, int words_amount);//Prepare words. All "ToLower"

#endif // SPEECHANALYSIS_H_INCLUDED
