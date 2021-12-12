#include<stdio.h>
#include<conio.h>
void main(){
	int i, j, k;
	printf("Pattern:\n");
	for(i=5; i>=1; i--){
		for(j=i-1; j>=1; j--){
			printf(" ");
		}
		for(k=5; k>=i; k--){
			printf("%d", k);
		}
		printf("\n");
	}
	getch();
}
