#include<stdio.h>
#include<conio.h>
void main(){
	int i, j, k;
	printf("Pattern:\n");
	for(i=1; i<=5; i++){
		for(k=i; k>=1; k--){
			printf("%d", k);
		}
		for(j=2; j<=i; j++){
			printf("%d", j);
		}
		printf("\n");
	}
	getch();
}

