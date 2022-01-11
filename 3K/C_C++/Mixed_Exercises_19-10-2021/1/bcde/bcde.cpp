#include <string>
#include <iostream>
#include <io.h>

using namespace std;
int values[255];
bool repeat = true;
int cont = 0;

int main() {

    cout << "START" << endl;
    cout << "Enter numbers followed by the ENTER key" << endl;
    cout << "Type -c to confirm inputs\n" << endl;
    while (repeat) {
        string inp;
        cin >> inp;
        if (inp == "-C" || inp == "-c") {
            repeat = false;

        } else {
            values[cont] = stoi(inp);
            cont ++;
        }
    }

    cout << "\n===================================================" << endl;
    int i = 0;
    cout << "EVEN NUMBERS: [ ";
    for (i = 0; i < cont; i++) {
        if (values[i] % 2 == 0) cout << values[i] << " ";
    }
    cout << "]" << endl;



    cout << "ODD NUMBERS: [ ";
    for (int i = 0; i < cont; i++) {
        if (values[i] % 2 != 0) cout << values[i] << " ";
    }
    cout << "]" << endl;




    cout << "NUMBERS WITH EVEN INDEX: [ ";
    for (int i = 0; i < cont; i++) {
        if (i % 2 == 0) cout << values[i] << " ";
    }
    cout << "]" << endl;



    cout << "NUMBERS WITH ODD INDEX: [ ";
    for (int i = 0; i < cont; i++) {
        if (i % 2 != 0) cout << values[i] << " ";
    }
    cout << "]" << endl;


    return 0;
}
