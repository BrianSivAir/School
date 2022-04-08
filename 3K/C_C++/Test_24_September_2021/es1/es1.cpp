#include <iostream>
#include <string>
using namespace std;
float total, average;
//string month[12] = {"January", "Febuary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "Dicember"};

int main() {

    for (int i = 1; i <= 12; i++) {
        float monthly_amount;
        cout << "Enter the amount of month [" << i << "]: ";
        cin >> monthly_amount;
        total += monthly_amount;
    }


    average = total / 12;
    cout << "\nThe total amount is " << total << " euro" << endl;
    cout << "The average is " << average << " euro" << endl;

    system("PAUSE");
    return 0;
}
