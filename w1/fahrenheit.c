/* Conversion of Fahrenheit to Celsius
 *
 * by LM
 *
 * Feb 10, 2022
 */
#include <stdio.h>

int main (void)
{
	int fahrenheit, celsius;

	printf("Please enter Fahrenheit as an integer: ");
	scanf("%d", &fahrenheit);
	celsius = (fahrenheit - 32)/1.8; // this means we have a double now
	printf("\n%d Fahrenheit is %d Celsius\n", fahrenheit, celsius);
	return 0;
}
