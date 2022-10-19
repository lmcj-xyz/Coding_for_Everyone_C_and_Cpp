/* 
 * Pointer example
 * 16 Oct
 * LM
 */
#include <stdio.h>

#define SIZE 5

int main (void)
{
	int grades[SIZE] = {78, 67, 92, 83, 88};
	double sum = 0.0;
	double *pointer_to_sum = &sum; // Initialize to the address of the variable "sum"
	int i;

	printf("Grades are:\n");
	
	for (i = 0; i < SIZE; i++)
		printf("%d\t", grades[i]);
	printf("\n\n");

	for (i = 0; i < SIZE; i++)
		sum += grades[i];
	printf("Average is %.2f:\n\n", sum/SIZE);
	printf("\n\n");

	printf("sum is at %p, or %lu and is %lf\n",
			pointer_to_sum,
			pointer_to_sum,
			*pointer_to_sum
			);
	printf("\n\n");
	printf("(no in) grades are at %lu to %lu\n",
			grades,
			grades + 5
			);
	printf("(index) grades are at %lu to %lu\n",
			&grades[i],
			&grades[i] + 5*4
			);
	printf("\n\n");

	return 0;
}
