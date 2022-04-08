#include <iostream>
#include <string>
#include <math.h>

using namespace std;

float a, b, x;
char repeat = 'y';

int main() {
    cout << "1 degree equation\n" << endl;
    while (repeat == 'y' || repeat == 'Y') {

        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
        cout << "\n";

        if (a == 0) {
            if (b == 0) {
                cout << "\aError: Indeterminate" << endl;
            } else {
                cout << "\aError: Impossible" << endl;
            }
        } else {
            x = -b / a;
            cout << "Solution:" << x << endl;
        }

        cout << "\nDo you want to repeat? [Y/N]";
        cin >> repeat;
        cout << "\n";
    }

    system("PAUSE");
    return 0;
}

