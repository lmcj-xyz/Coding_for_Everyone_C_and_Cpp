/* Exploración de sizeof
 * LM
 * 26 Feb
*/

#include <stdio.h>

int main ( void ) {
	int a = 2, b = 7;
	double average = 0.0;
	char ch = 'e';

	printf ("en mi compu\n");
	printf ("el tamano de int es %lu bytes\n", sizeof(a));
	printf ("el tamano de int es %lu bytes\n", sizeof(int));
	printf ("el tamano de long int es %lu bytes\n", sizeof(long int));
	printf ("el tamano de char es %lu bytes\n", sizeof(ch));
	printf ("el tamano de float es %lu bytes\n", sizeof(float));
	printf ("el tamano de double es %lu bytes\n", sizeof(double));
	printf ("el tamano de long double es %lu bytes\n", sizeof(long double));
	return 0;
}
