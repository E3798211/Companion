#ifndef SPEECHANALYSIS_H_INCLUDED
#define SPEECHANALYSIS_H_INCLUDED

#include <string>

std::string UserSpeech();                   //Returns User's sentence
std::string* SToWords(std::string str);     //Returns array of words

#endif // SPEECHANALYSIS_H_INCLUDED
