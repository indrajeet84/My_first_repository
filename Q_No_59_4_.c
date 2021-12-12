#include<stdio.h>
#include<conio.h>
void main(){
	int i, j, k, a=0, b;
	printf("Pattern:\n");
	for(i=1; i<=4; i++){
		for(j=1; j<=i; j++){
			printf("%d", ++a);
		}
		for(k=4-i; k>=1; k--){
			printf(" ");
		}
		for(k=4-i; k>=1; k--){
			printf(" ");
		}
		b=a;
		for(k=1; k<=i; k++){
			if(b!=10)
			printf("%d", b--);
			else
			b--;
		}
		printf("\n");
	}
	for(i=1; i<=3; i++){
		for(j=1; j<=1; j++){
			printf(" ");
		}
		for(j=3-i; j>=1; j--){
			printf(" ");
		}
		for(k=1; k<=i; k++){
			printf("%d ", --a);
		}
		printf("\n");
	}
	getch();
}



