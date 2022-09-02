/* chars
 * LM
 * 26 Feb
*/

#include <stdio.h>

int main ( void ) {
	char c = 'c';
	printf ( "c in ASCII es % d \n", c );
	printf ( "c caracter es % c \n", c );
	printf ( "caracteres consecutivos % c % c % c \n", c, c+1, c+2 );
	printf ( " rings %c % c % c \n", '\a', '\a', '\a');
	return 0;
}
