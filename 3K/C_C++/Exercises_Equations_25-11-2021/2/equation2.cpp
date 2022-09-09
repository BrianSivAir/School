#include <iostream>
#include <string>
#include <math.h>

using namespace std;

char repeat = 'y';

void resolve(float a, float b, float c, float &x1, float &x2);

int main() {
    cout << "2 degree equation\n" << endl;
    while (repeat == 'y' || repeat == 'Y') {
        float a,b,c,x1,x2;
        do {
            cout << "Enter a: ";
            cin >> a;
            cout << "Enter b: ";
            cin >> b;
            cout << "Enter c: ";
            cin >> c;
            cout << "\n";
        } while (a == 0);

        resolve(a, b, c, x1, x2);

        cout << "S: {" << x1 << ", " << x2 << "}" << endl;
        cout << "\nDo you want to repeat? [Y/N]";
        cin >> repeat;
        cout << "\n";
    }


    system("PAUSE");

    return 0;
}

void resolve(float a, float b, float c, float &x1, float &x2) {
    float delta = b * b -4 * a * c;
    x1 = -(b / 2 * a);
    x2 = x1;
    if (delta > 0) {
        delta = sqrt(delta) / 2 * a;
        x1 -= delta;
        x2 += delta;
    }
}
