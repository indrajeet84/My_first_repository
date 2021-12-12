#include<stdio.h>
#include<conio.h>
void main(){
	int i, j, k;
	printf("Pattern:\n");
	for(i=1; i<=5; i++){
		for(j=1; j<=i-1; j++){
			printf(" ");
		}
		for(k=i; k<=5; k++){
			printf("%d", i);
		}
		printf("\n");
	}
	getch();
}
