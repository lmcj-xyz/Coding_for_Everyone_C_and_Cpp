/* Fibonacci
 * 15 Oct
 * LM
 */
#include<stdio.h>

long fibonacci(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		return (fibonacci(n - 1) + fibonacci(n - 2));
	}
}

int main(void)
{
	int i, n = 15;
	for (i = 0; i <= n; i++)
	{
		long fi = fibonacci(i);
		printf("F(%d) = %d\n", i, fi);
	}
	return 0;
}
