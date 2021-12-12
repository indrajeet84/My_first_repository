#include<stdio.h>
#include<conio.h>
void main(){
	int i, j, k;
	printf("Pattern:\n");
	for(i='E'; i>='A'; i--){
		for(j='A'; j<=i; j++){
			printf("%c", j);
		}
		for(k=1; k<='E'-i; k++){
			printf(" ");
		}
		for(k=2; k<='E'-i; k++){
			printf(" ");
		}
		for(j=i; j>='A'; j--){
			if(j!='E')
			printf("%c", j);
		}
		printf("\n");
	}
	getch();
}


