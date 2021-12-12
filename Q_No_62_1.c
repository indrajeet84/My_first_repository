#include<stdio.h>
#include<conio.h>
void main(){
	int i, j, k;
	printf("Pattern:\n");
	for(i='A'; i<='D'; i++){
		for(k=1; k<='D'-i; k++){
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
	for(i='C'; i>='A'; i--){
		for(k=1; k<='D'-i; k++){
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





