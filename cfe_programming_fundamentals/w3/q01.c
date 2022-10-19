#include<stdio.h>

int main (void) {
	int i = 1; 
	int j = 2;
	int n = (i < j);
	printf("1. %d\n", n);
	int m = i, j+1;
	printf("4. %d\n", m);
}
