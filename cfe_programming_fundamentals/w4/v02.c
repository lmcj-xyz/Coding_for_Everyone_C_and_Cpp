/* 
 * Definition of function
 * 26 Sept
 * LM
 */

#include <stdio.h>

void wrt_very (int count){
	while (count > 0){
		printf("\nvery");
		count--;
	};
	printf("\nmuch.\n\n");
}

int main (){
	int repeat = 0;
	printf("How strong is your love 1-10? ");
	scanf("%d", &repeat);
	printf("\nI love you very");
	wrt_very(repeat);
	return 0;
}
