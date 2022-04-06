#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    string sentence[255];
    cout << "Enter \"stop\" to break" << endl;

    for (int st = 0; st < 255; st++) {

        char ch_str[100];
        int words = 1, chars = 0;
        int i;
        cout << "[" << st+1 << "]Enter a sentence: ";
        gets(ch_str);
        string str(ch_str);
        sentence[st] = str;
        while (str != "stop") {

        }


        for (i = 0; ch_str[i] != '\0'; i++){
            if (ch_str[i]!= ' '){
                chars++;
            }
            else if(ch_str[i]==' ' || ch_str[i] != '\n' || ch_str[i] != '\t'){
                words++;
            }
        }

        cout<<"Total words: " << words << endl;
        cout<<"Total characters: " << chars << "\n" << endl;



    }



    return 0;
}
