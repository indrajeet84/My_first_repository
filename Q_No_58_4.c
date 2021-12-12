#include<stdio.h>
#include<conio.h>
void main(){
	int i, j, k;
	printf("Pattern:\n");
	for(i=5; i>=1; i--){
		for(k=1; k<=i; k++){
			printf("%d", k);
		}
		for(j=1; j<=5-i; j++){
			printf(" ");
		}
		for(j=2; j<=5-i; j++){
			printf(" ");
		}
		for(j=i; j>=1; j--){
			if(j!=5)
			printf("%d", j);
		}
		printf("\n");
	}
	getch();
}

