#include<stdio.h>
#include<conio.h>
void main(){
	int i, j, k, l;
	printf("Pattern:\n");
	for(i=1; i<=5; i++){
		for(j=1; j<=5-i; j++)
		printf(" ");
		for(k=2; k<=i; k++)
		printf("*");
		for(l=1; l<=i; l++)
		printf("*");
		printf("\n");
	}
	getch();
}
