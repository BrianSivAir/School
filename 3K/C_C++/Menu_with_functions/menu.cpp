#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>

using namespace std;

void color(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void gotoxy(int x, int y) {
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int main() {

    int Set[] = {7, 7, 7};
    int counter = 2;
    char key;

    for(int i = 0 ;;) {


        gotoxy(10,5);
        color(Set[0]);
        cout << "1. Menu ";

        gotoxy(10, 6);
        color(Set[1]);
        cout << "2. Help ";

        gotoxy(10, 7);
        color(Set[2]);
        cout << "3. Other ";

        key = _getch();

        if(key == 72 && (counter >=2 && counter <=3)){
            counter --;
        }
        if(key == 80 && (counter >=1 && counter <=2)){
            counter ++;
        }
        if(key == '\r'){
            if (counter == 1){
                cout << "Menu 1 is Open";
            }
            if (counter == 2){
                cout << "Menu 2 is Open";
            }
            if (counter == 3){
                cout << "Menu 3 is Open";
            }
        }
    }




    system("PAUSE");
    return 0;
}

