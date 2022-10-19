/* Pointers and simple arrays
 * 15 Oct
 * LM
 */
#include<stdio.h>

int main (void)
{
	int i, data[100]; // declares an int array with 100 elements
	for (i=0; i<=99; i++)
	{
		data[i] = i;
		printf("data[%d] = %d\n", i, data[i]);
	}
	return 0;
}
