#include <stdio.h>
float a,b,c,max;
char brake = 'n';
int main() {
    while (brake == 'n' || brake == 'N') {
        printf("Insert first number: ");
        scanf("%f", &a);
        printf("Insert second number: ");
        scanf("%f", &b);
        printf("Insert third number: ");
        scanf("%f",&c);
        if (a > b) max = a; else max = b;
        if (max < c) max = c;
        printf("The maximum number is: %f", max);
        printf("\nDo you want to stop the program?[Y/N] ");
        getchar();
        scanf("%c", &brake);
    }
    return 0;
}