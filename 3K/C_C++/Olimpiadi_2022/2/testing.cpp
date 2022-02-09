#include <iostream>
#include <string>
using namespace std;
int f (int n);
int g (int n);
int calls = 0;


int f (int n) {
    calls++;
    if (n >= 10) {
        return 2;
    } else {
        return 2 * g(n-3) + 4;
    }
}

int g (int n) {
    if (n <= 0) {
        return 3;
    } else {
        return f(n*2) + 1;
    }
}

int main() {

    int k = f(7);
    cout << k << endl;
    cout << "Calls: " << calls;

    return 0;
}

