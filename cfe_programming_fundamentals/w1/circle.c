/* Circle and Area
 * LM
 * Feb 2022
 */

#include <stdio.h>

#define PI 3.14159

int main (){
	double area = 0.0, radius = 0.0; /* definition of variables */
	printf("Enter radius of the circle: ");
	scanf("%lf", &radius);
	area = PI * radius * radius; // compute area
	printf("The area of the circle is %lf and the radius is %lf\n", area, radius);
	return 0;
}
