#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int arr[10];
    int sum = 0;
    fstream file;
    file.open("Data.txt", ios::in);

    if (file.is_open()) {


        for (int i = 0; i < 10; i++) {
            string tmp = "0";

            getline(file, tmp);
            arr[i] = stoi(tmp);
        }

    }

    for (int i = 0; i < 10; i++) {
        if (arr[i] != 0) {
            if (i == 0) {
                cout << arr[i];
            } else {
                cout << " + " << arr[i];
            }
        }


        sum += arr[i];
    }
    cout << " = " << sum << endl;

    return 0;
}
