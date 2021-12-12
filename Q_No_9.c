#include<stdio.h>
#include<conio.h>
void main(){
	int a, b, c, l;
	printf("Enter any three numbers:\n");
	scanf("%d %d %d", &a, &b, &c);
	l = a>b?(a>c?a:c):(b>c?b:c);
	printf("The largest number is = %d", l);
	getch();
}                                 
