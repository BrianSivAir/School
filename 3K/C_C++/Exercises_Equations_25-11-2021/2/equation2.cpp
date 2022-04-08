#include <iostream>
#include <string>
#include <math.h>

using namespace std;

float a, b, c, delta, x1, x2;
char repeat = 'y';

int main() {
    cout << "2 degree equation\n" << endl;
    while (repeat == 'y' || repeat == 'Y') {
        do {
            do {
                cout << "Enter a: ";
                cin >> a;
                cout << "Enter b: ";
                cin >> b;
                cout << "Enter c: ";
                cin >> c;
                cout << "\n";
            } while (a == 0);

            delta = b * b -4 * a * c;
            x1 = -(b / 2 * a);
            x2 = x1;
            if (delta < 0) cout << "\aEquation impossible in R" << endl;
        } while (delta < 0);

        if (delta > 0) {
            delta = sqrt(delta) / 2 * a;
            x1 -= delta;
            x2 += delta;
        } else if (delta == 0) cout << "\aRadici reali e coincidenti" << endl;
        cout << "S: {" << x1 << ", " << x2 << "}" << endl;
        cout << "\nDo you want to repeat? [Y/N]";
        cin >> repeat;
        cout << "\n";
        a = 0; b = 0; c = 0; delta = 0; x1 = 0; x2 = 0;
    }
    system("PAUSE");

    return 0;
}

