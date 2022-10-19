/* Initialize arrays
 * 15 Oct
 * LM
 */
#include<stdio.h>

#define N 5

int main(void)
{
	int i; 
	int data1[N] = {9};
	int data2[N] = {1, 2, 3, 4, 5};
	char str[] = "a b c";
	for (i = 0; i < N; i++)
	{
		printf("data1[%d] = %d\n", i, data1[i]);
	}
	for (i = 0; i < N; i++)
	{
		printf("data2[%d] = %d\n", i, data2[i]);
	}
	for (i = 0; i < 6; i++)
	{
		printf("str[%i] = %c\n", i, str[i]);
	}
	printf("str = %c\n", str);
	return 0;
}
