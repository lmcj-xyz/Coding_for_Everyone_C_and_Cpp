/* Conversion of miles + yards to kilometers
 *
 * by LM
 *
 * Feb 10, 2022
 */
#include <stdio.h>

int main (void)
{
	double kilometers, miles, yards;
	printf("Give me a distance in miles and yards\n");
	printf("First the miles: ");
	scanf("%lf", &miles);
	printf("And then the yards: ");
	scanf("%lf", &yards);

	kilometers = 1.609 * (miles + yards/1760.0);
	printf("%lf miles and %lf yards is equal to %lf kilometers\n",
			miles, yards, kilometers);

}
