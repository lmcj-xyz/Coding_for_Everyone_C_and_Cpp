/* What is a pointer?
 * 16 Oct
 * LM
 */
#include <stdio.h>

int main (void)
{
	int a = 1; // Simple integer variable
	int *p = &a; // Initilize the pointer "p" to where the variable "a" is stored
	printf("%d\n", p); // This prints the address
	printf("%d\n", *p); // This prints the value
	return 0;
}
