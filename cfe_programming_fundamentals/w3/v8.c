/*
 * odd ball operators
 * 13 Sept
 * LM
 */

// Conditional operator "?:"
// Comma operator ","

#include<stdio.h>

int main (void){
	// Conditional operator example
	int a = 3;
	int b = 2;

	int c;
	// Concise version
	c = (a < b) ? a : b;
	printf("Using the concise version we get\n%d\n", c);

	int d;
	// if else equivalent
	if (a < b)
		d = a;
	else
		d = b;
	printf("And with the full version\n%d\n", d);

	// Comma operator is called also sequence point
	// expr1,expr2
	// means evaluate expr1 and once it is done evaluate expr2
	// the overall value of the expression is expr2
	// Actually the semicolon ";" is a sequence point

	int e, f, g;
	e = (f = 1, g = 2);

	printf("The value of f is\n%d\n", f);
	printf("The value of g is\n%d\n", g);
	printf("The value of e is\n%d\n", e);

	// You see this also in for statements
	int i, sum;
	for (sum=0, i=1; i<=50; i++)
		sum+=i;
		printf("\ni = %d and sum = %d\n", i, sum);

	return 0;
}
