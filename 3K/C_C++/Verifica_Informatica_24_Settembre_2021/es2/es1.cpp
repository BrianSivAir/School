#include <iostream>
#include <string>
using namespace std;
int majours = 0;
bool repeat = true;

int main() {

    while (repeat) {
        string name;
        int age;
        char ans;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;

        if (age > 18) majours++;

        cout << "Do you want to add a new person? [Y/N]";
        cin >> ans;
        if (ans == 'N' || ans == 'n') repeat = false;
        cout << "\a";
    }

    cout << "Number of adults: " << majours << endl;

    system("PAUSE");
    return 0;
}
