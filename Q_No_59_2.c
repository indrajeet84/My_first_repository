#include<stdio.h>
#include<conio.h>
void main(){
	int i, j, k, a=0;
	printf("Pattern:\n");
	for(i=1; i<=4; i++){
		for(j=4-i; j>=1; j--){
			printf(" ");
		}
		for(k=1; k<=i; k++){
			printf("%d", ++a);
		}
		for(j=i-1; j>=1; j--){
			printf("%d", --a);
		}
		printf("\n");
	}
	for(i=3; i>=1; i--){
		for(j=4-i; j>=1; j--){
			printf(" ");
		}
		a=a-2;
		for(k=1; k<=i; k++){
			printf("%d", ++a);
		}
		for(j=i-1; j>=1; j--){
			printf("%d", --a);
		}
		printf("\n");
	}
	getch();
}


