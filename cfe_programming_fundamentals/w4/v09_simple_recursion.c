/* Simple recursion
 *
 * 15 Oct
 * LM
 */
#include<stdio.h>

void countdown(int n)
{
	while (n > 0)
	{
		printf("time is %d\n", n);
		n -= 1;
	}
	printf("BOOM!!!\n");
}

void recursive_countdown(int n)
{
	if (n ==0)
	{
		printf("BOOM!!\n");
	}
	else
	{
		printf("time is %d\n", n);
		recursive_countdown(n-1);
	}
}

int main(void)
{
	countdown(5);
	recursive_countdown(5);
	return 0;
}
