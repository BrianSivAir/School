#include <iostream>

using namespace std;


int main() {
    while (true) {
        int decimal[10];
        int n, i;
        cout << "START" << endl;
        cout << "Enter a positive integer: ";
        cin >> n;
        for(i = 0; n > 0; i++) {
            decimal[i] = n % 2;
            n /= 2;
        }

        cout<<"Binary of the given number = ";
        for(i = i - 1; i >= 0; i--) {
        cout << decimal[i];

        }
    }


    return 0;
}
