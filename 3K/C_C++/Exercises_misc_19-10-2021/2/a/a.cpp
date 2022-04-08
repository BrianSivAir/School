#include <string>
#include <iostream>

using namespace std;
int sum;
bool repeat = true;
int cont = 0;

int main() {

    cout << "START" << endl;
    cout << "Enter positive numbers followed by ENTER key" << endl;
    cout << "Enter 0 to confirm inputs" << endl;
    while (repeat) {
        int inp;
        cin >> inp;
        if (inp > 0) {
            sum += inp;
            cont++;
        } else if (inp == 0) repeat = false;
    }

    cout << "\n===================================================" << endl;
    cout << "SUM of " << cont << " entered values = " << sum << endl;


    return 0;
}
