#include<stdio.h>
#include<conio.h>
void main(){
	int i, j, k;
	printf("Pattern:\n");
	for(i=5; i>=1; i--){
		for(j=1; j<=5-i; j++){
			printf(" ");
		}
		for(k=1; k<=i; k++){
			printf("*");
		}
		printf("\n");
	}
	getch();
}
