#include <stdio.h>

float r;
const float p = 3.14;
float c;
float a;
char brake = 'N';



int main() {

    while (brake == 'N' || brake == 'n') {
        printf("Define the radius: ");
        scanf("%f", &r);

        c = 2*r*p;
        a = r*r*p;

        printf("p= %f\n", c);
        printf("a= %f\n", a);

        printf("Do you want to stop the program?[Y/N] ");
	    
	    /* KNOWN ISSUE: The fscanf below will
	    not stop the program from running and
	    the user will not be able to enter data.
	    FIX: Clean the ENTER char from the buffer. */
	    
	    getchar();
        scanf("%c", &brake);

        r = 0;
        c = 0;
        a = 0;
    }



    return 0;
}
