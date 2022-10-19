/*
 * Ternary operator example
 * 15 Sept 2022
 * LM
 */

#include<stdio.h>

int main (void){
	int speed;
	printf("\nEnter your speed: ");
	scanf("%d", &speed);
	speed = (speed <= 65) ? (65) : (speed <= 70) ? (70) : (90);
	switch (speed){
		case 65: printf("\nNo ticket\n\n"); break;
		case 70: printf("\nYes ticket\n\n"); break;
		case 90: printf("\nExpensive ticket\n\n"); break;
		default: printf("\nInvalid speed\n\n"); break;
	}
	return 0;
}
