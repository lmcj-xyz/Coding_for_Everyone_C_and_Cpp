/*
 * Table of sin and cos values
 * LM
 * 19 Sept
 */
#include<stdio.h>
#include<math.h> // Remember to compile using the option "-lm"

int main (void) {
	int i; // i is an integer
	float sin_var, cos_var; // The values of sin an cos are not integers
	printf("     |sin(x)| \t\t      |cos(x)|\n", i, sin_var, i, cos_var); // A little format as table
	for (i=0; i<10; i++){
		sin_var = fabs(sin(i)); // Use fabs to compute absolute value to floating point number
		cos_var = fabs(cos(i)); // BTW, you have to use fabs to have the values between (0, 1) as requested
		printf("|sin(%d)| = %f \t |cos(%d)| = %f\n", i, sin_var, i, cos_var);
	}
}
