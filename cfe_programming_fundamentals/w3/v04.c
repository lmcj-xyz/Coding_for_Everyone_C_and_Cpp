/*
 * Luis Mario
 * Putting together stuff
 * 1 sept
 */
#include<stdio.h>
int main(void){
	int blanks = 0, digits = 0, letters = 0, others = 0;
	int c; //Integer value of character
	       
	while((c = getchar()) != EOF){
		if (c == ' ')
			++blanks;
		else if (c >= '0' && c <= '9')
			++digits;
		else if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
			++letters;
		else
			++others;
	};
	printf ("\nblanks = %d\ndigits = %d\nletters = %d\nothers = %d\n", 
		 blanks, digits, letters, others
		 );
	return 0;
}
