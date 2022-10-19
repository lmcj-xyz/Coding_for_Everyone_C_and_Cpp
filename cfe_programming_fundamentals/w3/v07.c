/*
 * for statement example
 * Count characters by group
 * LM
 * 4 Sept
 */
#include<stdio.h>

int main (void)
{
	int blanks = 0, digits = 0, total_chars = 0;
	int c; //To retrieve integer value of characters
	for(; (c = getchar()) != EOF; total_chars++)
	{ 
		// Expression 1 is empty because we do not need initialization
		if (c = ' ')
			++blanks;
		else if (c >= '0' && c <= '9')
			++digits;
	};
	printf(" blanks = %d\n digits = %d\n total_chars = %d\n\n",
			blanks, digits, total_chars);
	return 0;
};
