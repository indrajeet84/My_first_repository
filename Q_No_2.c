#include<stdio.h>
#include<conio.h>
void main(){
	int a, b;
	printf("Enter any two numbers:\n");
	scanf("%d %d", &a, &b);
	if(a>b)
	printf("%d is the largest than %d:\n", a, b);
	else
	printf("%d is the largest than %d:\n", b, a);
	getch();
}
