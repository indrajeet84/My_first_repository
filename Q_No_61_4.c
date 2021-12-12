#include<stdio.h>
#include<conio.h>
void main(){
	int i, j, k;
	printf("Pattern:\n");
	for(i='E'; i>='A'; i--){
		for(k=1; k<='E'-i; k++){
			printf(" ");
		}
		for(j=i; j>='A'; j--){
			printf("%c", j);
		}
		for(j='B'; j<=i; j++){
			printf("%c", j);
		}
		printf("\n");
	}
	getch();
}

