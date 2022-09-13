/*
 * LM
 * For statement and its while analog
 * 3 Sept
 */
#include<stdio.h>

int main (void){
	int i;
	for (i=1; i<=5; i++){
		printf("i is %d\n", i);
	};
	int sum = 0;
	int n = 5;
	for(i = 1; i<=n; i++){
		sum+=i;
		printf("Sum is %d\n", sum);
	}
	return 0;
}
