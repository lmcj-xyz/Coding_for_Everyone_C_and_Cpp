/* Factorial
 * 15 Oct
 * LM
 */
#include<stdio.h>

long int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return 1;
	}
	else
	{
		return (factorial(n-1) * n);
	}
}

int main(void)
{
	int n = 2;
	int nfact;
	nfact = factorial(n);
	printf("%d! = %d\n", n, nfact);
	return 0;
}
