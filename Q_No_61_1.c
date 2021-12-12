#include<stdio.h>
#include<conio.h>
void main(){
	int i, j, k;
	printf("Pattern:\n");
	for(i='A'; i<='E'; i++){
		for(k=1; k<='E'-i; k++){
			printf(" ");
		}
		for(j='A'; j<=i; j++){
			printf("%c", j);
		}
		for(j=i-1; j>='A'; j--){
			printf("%c", j);
		}
		printf("\n");
	}
	
	getch();
}





