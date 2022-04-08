#include <string>
#include <iostream>

using namespace std;


int main() {

    cout << "START" << endl;
    cout << "Enter positive integer followed by ENTER key" << endl;
    cout << "Enter 0 to confirm inputs" << endl;
    while (true) {
        int number;
        int m = 0;
        int flag = 0;
        cin >> number;
        m = number/2;
        for(int i = 2; i <= m; i++)
        {
            if(number % i == 0)
            {
                cout<<"Number is not Prime."<<endl;
                flag=1;
                break;
            }
        }
        if (flag==0)
            cout << "Number is Prime."<<endl;
    }




    return 0;
}
