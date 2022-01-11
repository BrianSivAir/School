#include <iostream>
#include <string>

float tot = 0;
int proceed = 1;

int main() {
    while (proceed == 1) {
    string name;
    float price;
    int quantity;

    cout << "Enter product name: ";
    cin >> name;
    cout << "Enter product price: ";
    cin >> price;
    cout << "Enter quantity: ";
    cin >> quantity;

    price = price ((price * quantity)+(price * quantity)*22/100);
    tot += price;

    cout << name << " : " << price << endl;
    cin >> proceed;

    }
    cout << "Total: " << tot;
    return 0;
}
