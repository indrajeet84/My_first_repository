#include<stdio.h>
#include<conio.h>
void main(){
	int i, j;
	printf("Pattern:\n");
	for(i=1; i<=5; i++){
		for(j=1; j<=i; j++){
			if((i+j)%2==0)
			printf("1");
			else
			printf("0");
		}
		printf("\n");
	}
	getch();
}
