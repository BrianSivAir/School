
#include <iostream>
#include <string>
using namespace std;

string produts[11] = {"Pasta", "Ragù", "Pane", "Vino", "Mele", "Manzo", "Kiwi", "Taralli", "Pollo", "Pomodori"};
float prices[11] = {2.00, 3.00, 1.00, 5.00, 2.00, 1.00, 1.00, 2.00, 2.00, 3.00};
float discounts[11] = {2, 12, 2, 2, 5, 12, 5, 2, 12, 2}; //Categories: OrtoFrutta, Carni, Altro

int main() {


    for (int i = 0; i < 10; i++) {

        float discount = (prices[i] * discounts[i]) / 100;
        prices[i] = prices[i] - discount;
        cout << "Name: " << produts[i] << ", Categ: " << discounts[i] << ", Prices: " << prices[i] << endl;
    }


    return 0;
}
