/* Tipos de declaraciones y asignaciones
 * LM
 * 26 Feb
*/

#include <stdio.h>

int main (void) {
	int a = 5, b = 7, c = 6; // declaración e inicialización
	double average = 0.0; // buena práctica si declaramos un doble, inicializarlo como doble

	printf("a = % d, b = % d, c = % d \n", a, b, c) ;
	average = (a + b + c) / 3.0;
	printf("average = %lf\n", average);
	return 0;

}
