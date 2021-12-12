#include<stdio.h>
#include<conio.h>
void main(){
	int i, j, k;
	printf("Pattern:\n");
	for(i='E'; i>='A'; i--){
		for(j='A'; j<=i; j++){
			printf("%c", j);
		}
		printf("\n");
	}
	getch();
}

