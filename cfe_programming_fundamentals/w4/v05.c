/*
 * Table of squares and cubes
 * Function prototyping
 * 26 Sept
 * LM
 */
#include <stdio.h>

float square (double); // You can put only the type of argument
float cube (double x); // Or both type and name (signature)

int main (){
	int how_many = 0, i, j; // You can initialise variables in chain
	printf("How many elements do you want to use?\n");
	scanf("%d", &how_many);
	printf("This will print the square and cube of 1 to %d\n");
	
	for (i=0; i<=how_many; i++){
		for (j=0; j<=how_many; j++){
			printf("\n%lf\t%lf\t%lf", i + j/10.0, square(i + j/10.0), cube(i + j/10.0));
		}
	}

	printf("\n\n");
	return 0;
}

float square (double x) {
	return x*x;
}

float cube (double x) {
	return x*x*x;
}
