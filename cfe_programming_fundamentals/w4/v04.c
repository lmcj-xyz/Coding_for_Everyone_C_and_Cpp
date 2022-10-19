/*
 * Function prototypes
 * 26 Sept
 * LM
 */
#include <stdio.h>

/* 
 * Since you need to declare anything before using it
 * Prototypes exist to declare a function before defining it
 * and in doing so, you can use it in your program
 * This also helps in larger projects, when you have functions
 * defined in different files
 */

double cube (double); // Function prototype

int main () {
	double a = 3.0;
	double b = cube(a);
	printf("a   = %f\n", a);
	printf("a^3 = %f\n", b);

	return 0;
}

double cube (double x){ // Function definition
	return x*x*x;
}
