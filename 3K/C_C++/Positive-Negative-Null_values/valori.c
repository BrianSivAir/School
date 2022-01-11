#include <stdio.h>

int valPos, valNeg, valNulli;
float num[11];
int i;

int main() {

    for (i = 0; i < 10; i++) {
        scanf("%f", &num[i]);
    }

    for (i = 0; i < 10; i++) {
        if (num[i] < 0) valNeg++;
        if (num[i] > 0) {
            valPos++;
        } else valNulli++;
    }
    printf ("%d %d %d", valPos, valNeg, valNulli);

    return 0;
}
