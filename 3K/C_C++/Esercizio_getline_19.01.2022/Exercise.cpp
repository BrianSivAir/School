#include <iostream>
#include <cctype>
using namespace std;

string sentence[225];

int main() {

    for(int i = 0; i < 255; i++) {
        cout << "Enter a sentence: ";
        getline(cin, sentence[i]);
        string str = sentence[i];
        string sz = str.size();
        char ch_arr[sz + 1];
        strcpy(ch_arr, str.c_str());


        cout << "The sentence is " << str.size() << " characters long" << endl;
        cout << "The sentence contains " << countWordsInString(&str) << "words" << endl;

        if (sentence[i].find("stop") != string::npos) {
            i = 300;
        }
    }




        return 0;
    }
