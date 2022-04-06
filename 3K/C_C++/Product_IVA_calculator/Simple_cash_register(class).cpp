#include <iostream>
#include <string>
using namespace std;

float tot = 0;
string name[225];
float price[225], quantity[225];
bool repeat = true;
int prodn = 0;

class product{
    public:
       string name[225];
       float price[225], quantity[225];
};

bool elabResponse() {
    bool rep;
    bool OK = false;
    char response;

    while (!OK) {
        cin >> response;
        if (response == 'Y' || response == 'y') {
            rep = true; OK = true;
        } else if (response == 'N' || response == 'n') {
            rep = false; OK = true;
        } else {
            cout << "\aEnter a valid response!" << endl;
        }
    }
    cout << "\n";
    return rep;
}

int main() {
    cout << "Welcome to this application!" << endl;
    for(prodn; repeat; prodn++) {
        cout << "Enter the product name: ";
        cin >> name[prodn];
        cout << "Enter the product price: ";
        cin >> price[prodn];
        cout << "Enter the product quantity: ";
        cin >> quantity[prodn];

        cout << "\nDo you want to enter another product? [Y/N]" << endl;
        repeat = elabResponse();
    }

    cout << "REGISTERED PRODUCTS:" << endl;
    for (int i = 0; i < prodn; i++) {
        float unitamount = price[i] * quantity[i] + price[i] * quantity[i] * 22/100;
        tot += unitamount;

        cout << "\n    [Product at " << i+1 << "]" << endl;
        cout << "    Name: " << name[i] << "\n    Amount to pay: " << unitamount << " euro" << endl;
    }

    cout << "\nThe total amount is: " << tot << " euro" << endl;
    if (getOsName().rfind("Windows", 0) == 0) system("PAUSE");

    return 0;
}
