#include<stdio.h>
#include<conio.h>
void main(){
	int a, b, c;
	printf("Enter any three number:\n");
	scanf("%d %d %d", &a, &b, &c);
	if(a>b && a>c)
	printf("%d is the largest than %d and %d:\n", a, b, c);
	else if(b>c)
	printf("%d is the largest than %d and %d:\n", b, a, c);
	else
	printf("%d is the largest than %d and %d:\n", c, a, b);
	getch();
}
