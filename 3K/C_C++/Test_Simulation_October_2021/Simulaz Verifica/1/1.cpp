
#include <iostream>
#include <string>
using namespace std;

string produts[11] = {"Pasta", "Ragù", "Pane", "Vino", "Biscotti", "Latte", "Cioccolata", "Taralli", "Funghi", "Pomodori"};
float prices[11] = {2.00, 3.00, 1.00, 5.00, 2.00, 1.00, 1.00, 2.00, 2.00, 3.00};


int main() {


    for (int i = 0; i < 10; i++) {

        float discount = (prices[1] * 15) / 100;
        prices[i] = prices[i] - discount;
        cout << "Name: " << produts[i] << ", Prices: " << prices[i] << endl;
    }


    return 0;
}
