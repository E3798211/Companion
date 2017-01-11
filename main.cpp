#include <iostream>
#include <string>
#include <ctype.h>

#include "SpeechAnalysis.h"

using namespace std;

int main()
{
    string speech;
    string* words;
    int words_num;

    //Some pre-. "Be correct", "put dots", etc
    cout << "Hello! Let's begin our conversation.\nPlease, enter everything correctly. "
         << "Mistakes may cause some troubles,\n"
         << "I will probably misunderstand you. Please, always put marks (?).\n"
         << "Do not write long sentences (more than 5 words till now).\n"
         << "Do not use predlogi (?) [sorry for that].\n"
         << "Write just one sentence. You start.\n";

    //Getting User's sentence. Sentence must be correct now.
    speech = UserSpeech();
    words = SToWords(speech);

    cout << "[0]: " << words[0] << "\n[1]: " << words[1]
         << "\n[2]: " << words[2] << "\n[3]: " << words[3]
         << "\n[4]: " << words[4] << "\n[5]: " << words[5];
    //words_num = WordsNum(speech);

    //cout << words_num;


    //CHECK SToWords() FOR SEVERAL DOTS, SPACES ETC ! ! ! //Checked.


    //LOOK FOR ARROW IN USERSPEECH


    //first check for punctuation, second - if word exist (no 'strange' symbols)

    //cout << speech;
}

