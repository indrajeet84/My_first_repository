#include<stdio.h>
#include<conio.h>
void main(){
	int i, j, k;
	printf("Pattern:\n");
	for(i='D'; i>='A'; i--){
		for(k='A'; k<=i-1; k++){
			printf(" ");
		}
		for(j='D'; j>=i; j--){
			printf("%c", j);
		}
		for(j=i+1; j<='D'; j++){
			printf("%c", j);
		}
		printf("\n");
	}
	for(i='B'; i<='D'; i++){
		for(k='A'; k<=i-1; k++){
			printf(" ");
		}
		for(j='D'; j>=i; j--){
			printf("%c", j);
		}
		for(j=i+1; j<='D'; j++){
			printf("%c", j);
		}
		printf("\n");
	}
	getch();
}





