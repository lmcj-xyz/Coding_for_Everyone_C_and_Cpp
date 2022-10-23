#include <stdio.h>
int mystery (int p, int q)
{
	int r;
	if ((r = p % q) == 0)
		return q;
	else
		return mystery(q, r);
}
int main (void)
{
	//int a = 3, b = 4, c = 0, d = '1';
	//printf("\n%d\n", b%a);
	//printf("\n%d\n", a<b);
	//int a = 1, b = 2, c = 3;
	//printf("\n%d\n", a-b*c );
	//printf("\n%d\n", c/a*b );
	//printf("\n%d\n", a++ + --b );
	//printf("\n%d\n", b = a = c );
	//int i = 0, j = 1, k = 2;
	//printf("\n%d\n", i&&j);
	//printf("\n%d\n", !!i);
	//printf("\n%d\n", i || !!k);
	//printf("\n%d\n\n", (i && (j = k)) || (k > j) );
	//printf("\n%d\n", mystery(2, 6));
	//printf("\n%d\n", mystery(7, 91));
	//printf("HELlO\t\tWORLD\n");
	//
	int data[5] = {0 ,1, 2, 3, 4}, sum = 0 , i;

	for (i = 0; i < 5 ; i++)
    		sum = sum + data[i];
	printf("%d\n", sum);
	//int a[10] = {1,2,3,4,5,6,7,8,9,10}, i = 6 ;
	//int *p = &a[0];
	//printf("%d\n", *(p + i));	
	return 0;
}
