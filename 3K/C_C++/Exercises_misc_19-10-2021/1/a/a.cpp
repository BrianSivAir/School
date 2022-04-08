#include <string>
#include <iostream>

using namespace std;
char chrs[255];
bool repeat = true;
int cont = 0;

int main() {

    cout << "START" << endl;
    cout << "Enter characters followed by the ENTER key" << endl;
    cout << "Enter 0 to confirm inputs" << endl;
    while (repeat) {
        char inp;
        cin >> inp;
        if (inp != '0') {
            chrs[cont] = inp;
            cont ++;

        } else repeat = false;
    }

    cout << "\n===================================================" << endl;
    cout << "REVERSE:\n" << endl;
    for (int i = cont; i>=0; i--) {
        cout << chrs[i] << endl;
    }

    return 0;
}
