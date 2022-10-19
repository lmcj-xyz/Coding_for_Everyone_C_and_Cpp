/*
 * Break and continue and switch
 * 18 Sept
 * LM
 */

#include<stdio.h>

int main (){
	int i, a;
	for (i=-1; i<=3; i++){
		switch (i){
			case 1: a = 2*i;
				break;
			case 2: a = 3*i;
				break;
			default: a = 4*i;
				 break;
		}
		printf("\n%d\n", a);
	}
	return 0;
}
