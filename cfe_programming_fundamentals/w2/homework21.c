#include <stdio.h>
#define PI 3.12159
int main ( void ) {
	double radius = 0;
	printf ( "Enter radius:\n" );
	scanf ("%lf", &radius);
	printf ("volume is: %lf \n\n", 4.0*radius*radius*radius*PI/3.0 );
	return 0;
}
