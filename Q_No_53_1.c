#include<stdio.h>
#include<conio.h>
void main(){
	int i, j;
	printf("Pattern:\n");
	for(i=1; i<=4; i++){
		for(j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=2; i<=4; i++){
		for(j=4; j>=i; j--){
			printf("*");
		}
		printf("\n");
	}
	getch();
}
