/* Call by reference simulated
 * 18 Oct
 * LM
 */

/*
 * - When called by value a local instance is modified
 * - When called by reference we need to de-reference
 * * de-reference
 * & calls address
 */
#include <stdio.h>

void swap1(int i, int j)
{
	int temp = i;
	i = j;
	j = temp;
	// This function changes locally the variable, but
	// not the actual value for the program
}

void swap2(int *i, int *j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
	// This function receives the address and actually
	// changes the variable for good
}

int main (void)
{
	int a = 1, b = 3;

	printf("\tLocal change\n");
	printf("\nNot swapped: a = %d, b = %d\n", a, b);
	swap1(a, b); // Note that here we give the integers to the function
	printf("\nSwapped:     a = %d, b = %d\n", a, b);

	printf("\tDereference\n");
	printf("\nNot swapped: a = %d, b = %d\n", a, b);
	swap2(&a, &b); // Here we give the address to change it properly
	printf("\nSwapped:     a = %d, b = %d\n", a, b);

	return 0;
}
// The steps for this are:
// 1. Declare parameters as pointers
// 2. Use dereferenced pointer in the body of the function
// 3. Pass in the address into the function of the values to swap
