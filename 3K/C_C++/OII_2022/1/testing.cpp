#include <iostream>
#include <string>
using namespace std;


int main() {
    int i, j, a;
    int v[10] = {3, 4, 5, 4, 4, 3, 5, 2, 1};
    i = 0;
    j = 9;

    while (i < 5) {
        if (v[i] != v[j-i-1]) {
            a = v[i];
            v[i] = v[j-i-1];
            v[j-i-1] = a;
        }
        i++;
    }
    i = 0;
    while (i < j) {
        cout << v[i] << " ";
        i++;
    }

    return 0;
}

