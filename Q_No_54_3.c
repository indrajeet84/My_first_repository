#include<stdio.h>
#include<conio.h>
void main(){
	int i, j, k, l;
	printf("Pattern:\n");
	for(i=4; i>=1; i--){
		for(j=1; j<=7; j++){
			if(j<=i || j>(7-i))
			printf("*");
    		else 
			printf(" ");
		}
		printf("\n");
	}
	getch();
}
