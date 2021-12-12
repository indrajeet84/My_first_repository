#include<stdio.h>
#include<conio.h>
void main(){
	int i, j, k;
	printf("Pattern:\n");
	for(i=1; i<=4; i++){
		for(j=4-i; j>=1; j--){
			printf(" ");
		}
		for(k=1; k<=i; k++){
			printf("*");
		}
		printf("\n");
	}
	for(i=3; i>=1; i--){
		for(j=1; j<=4-i; j++){
			printf(" ");
		}
		for(k=1; k<=i; k++){
			printf("*");
		}
		printf("\n");
	}
	getch();
}
