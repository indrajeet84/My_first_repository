#include<stdio.h>
#include<conio.h>
void main(){
	int i, j, k, l;
	printf("Pattern:\n");
	for(i=1; i<=4; i++){
		for(j=1; j<=4-i; j++)
		printf(" ");
		for(k=2; k<=i; k++)
		printf("*");
		for(l=1; l<=i; l++)
		printf("*");
		printf("\n");
	}
	for(i=3; i>=1; i--){
		for(j=1; j<=4-i; j++)
		printf(" ");
		for(k=2; k<=i; k++)
		printf("*");
		for(l=1; l<=i; l++)
		printf("*");
		printf("\n");
	}
	getch();
}
