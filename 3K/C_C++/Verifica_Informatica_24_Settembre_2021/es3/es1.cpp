#include <iostream>
#include <string>
using namespace std;
int a, b, t;
int main() {

    do{
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
    } while (a <= 0 || b <= 0);

    if (a < b) {
        t = a;
        a = b;
        b = t;
    }
    while (b > 0) {
        t = a % b;
        a = b;
        b = t;
    }
    cout << "Massimo comune divisore: " << a << "\n";

    system("PAUSE");
    return 0;
}
