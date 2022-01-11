#include <iostream>
using namespace std;

int arr[225];
int size = 10;
int temp;

int main() {

    cout << "Enter integers numbers:" << endl;

    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[j] < arr[i]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Numbers sorted descending order:" << endl;

    for(int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }
        cout << "\n" << endl;
        system("PAUSE");
        return 0;
    }
