/* The distance of a marathon converted from miles to kilometers
* by LM
* Feb 10, 2022
*/

#include <stdio.h>

int main (void)
{
	int miles = 26, yards = 385;
	double kilometers;

	/* It is important to use the floating point in 1760.0
	 * so that we have a float, it can lead for example here
	 * to have a zero instead of a meaningful number*/
	kilometers = 1.609 * (miles + yards/1760.0);
	printf("\nA marathon is %lf kilometers.\n\n", kilometers);
	return 0;
}
