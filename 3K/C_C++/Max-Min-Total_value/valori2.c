#include <stdio.h>
int number[100];
int min, max;
float average;
int total;
int i;
int j;


int main() {

    for (i = 0; i < 100; i++) {
    j = i+1;
    if (i == 0) printf("Please enter a number: "); else printf("+ Add a number: ");
    scanf("%d", &number[i]);
    getMax(number, i);
    getMin(number, i);
    getTotal(number, i);
    average = (float)total / (float)j;

    printf("\n    The maximum number is: %d\n", max);
    printf("    The minimum number is: %d\n", min);
    printf("    The average is: %f\n\n", average);

    printf("    You have entered the following number: [");
    int l;
    for (l = 0; l <= i; l++) {
        if (l == 0) printf("%d", number[l]); else printf("; %d", number[l]);
    }
    printf("]\n\n");

    }

    system("PAUSE");


    return 0;
}

void getMax(int numbers[], int n) {
    int i;
    max = number[0];
    for (i = 0; i <= n; i++) {
        if (numbers[i] > max) {
            max = number[i];
        }

    }
}
void getMin(int numbers[], int n) {
    int i;
    min = number[0];
    for (i = 0; i <= n; i++) {
        if (numbers[i] < min) {
            min = number[i];
        }

    }
}
void getTotal(int numbers[], int n) {
    int i;
    total = 0;
    for (i = 0; i <= n; i++) {
        total = total + numbers[i];
    }

}
