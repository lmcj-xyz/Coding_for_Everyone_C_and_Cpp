/* Computation of sin(x)
 * LM
 * 26 Feb 2022
 */
#include <stdio.h>
#include <math.h> // include math library

int main ( void ) {
	double x, y; // declaration of the variables I use
	printf( "Please give me a number between 0 and 1:\n" );
	scanf( "%lf", &x ); // ask the user for a number
	while ( x < 0 || x > 1 ){ // while loop in case the user does not enter a number in the interval [0,1]
		printf( "It has to be a number between 0 and 1, try again:\n" );
		scanf( "%lf", &x );
	}
	y = sin(x); // if the number is in the correct interval computes sin(x)
	printf( "The sine of %lf is %lf\n", x, y ); 
	return 0;
}
