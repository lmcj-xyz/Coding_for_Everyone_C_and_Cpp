/*
 * Luis Mario
 * Logical operators and short circuit evaluation
 * 1st Sept 2022
 */

#include<stdio.h>

int main(){
	int outside, weather;
	printf("\nEnter 1 if you are outside, or enter 0 otherwise: ");
	scanf("%d", &outside);
	printf("\nEnter 1 if it is raining, or enter 0 otherwise: ");
	scanf("%d", &weather);
	if (outside && weather)
		printf("\nPlease use an umbrella.\n");
	else
		printf("\nDress normaly.\n");
	return 0;
}
