#include <iostream>
#include <string>
#include <ctype.h>

#include "SpeechAnalysis.h"

using namespace std;

int main()
{
    string speech;
    string* words;

    //Some pre-. "Be correct", "put dots", etc
    cout << "Hello! Let's begin our conversation.\nPlease, enter everything correctly. "
         << "Mistakes may cause some troubles,\n"
         << "I will probably misunderstand you. Please, always put marks (?).\n"
         << "Do not write long sentences (more than 5 words till now). You start.\n";

    //Getting User's sentence. Sentence must be correct now.
    speech = UserSpeech();
    //words = SToWords(speech);

    //first check for punctuation, second - if word exist (no 'strange' symbols)

    cout << speech;
}
