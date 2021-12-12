#include<stdio.h>
#include<conio.h>
void main(){
	int i, j;
	printf("Pattern:\n");
	for(i='A'; i<='E'; i++){
		for(j=i; j>='A'; j--){
			printf("%c", j);
		}
		printf("\n");
	}
	getch();
}

