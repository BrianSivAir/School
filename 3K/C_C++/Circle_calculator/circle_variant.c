#include <stdio.h>

float r;
const float p = 3.14;
float c;
float a;
int proceed = 1;



int main() {

    printf("To quit enter 0.\n");
    while (proceed == 1) {
        printf("Define the radius: ");
        scanf("%f", &r);

        if (r == 0) {
        proceed = 0;
        } else {

        c = 2*r*p;
        a = r*r*p;

        printf("p= %f\n", c);
        printf("a= %f\n", a);
        }

        r = 0;
        c = 0;
        a = 0;
    }



    return 0;
}
