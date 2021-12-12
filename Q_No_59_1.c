#include<stdio.h>
#include<conio.h>
void main(){
	int i, j, k, a=0;
	printf("Pattern:\n");
	for(i=1; i<=5; i++){
		for(j=5-i; j>=1; j--){
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
	getch();
}


