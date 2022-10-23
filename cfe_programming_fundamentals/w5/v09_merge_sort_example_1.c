/* Merge sort example 1
 * 20 Oct
 * LM
 */
#include <stdio.h>

void print_array(int how_many, int data[], char *str)
{
	int i;
	printf("%s", str);
	for (i = 0; i < how_many; i++)
	{
		printf("%d\t", data[i]);
	}
}

void merge (int a[], int b[], int c[], int how_many) // a and b are the same size
{
	int i = 0, j = 0, k = 0; // Indexes for the different bins
	
	while (i < how_many && j < how_many)
	{
		if (a[i] < b[j])
		{
			c[k++] = a[i++];
		} 
		else 
		{
			c[k++] = b[j++];
		}
	}
	while (i < how_many)
	{
		c[k++] = a[i++];
	}
	while (j < how_many)
	{
		c[k++] = b[j++];
	}
}

#define SIZE 5
#define SIZE2 10

int main (void)
{
	int a[SIZE] = {67, 83, 83, 88, 99};
	int b[SIZE] = {58, 68, 78, 81, 86};
	int c[SIZE2];

	print_array(SIZE, a, "Grades 1\n");
	printf("\n\n");
	print_array(SIZE, b, "Grades 2\n");
	printf("\n\n");

	merge(a, b, c, SIZE);

	print_array(2*SIZE, c, "Sorted grades\n");
	printf("\n\n");
	return 0;
}
