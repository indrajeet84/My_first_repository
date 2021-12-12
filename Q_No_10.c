#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("Enter any number:\n");
	scanf("%d", &a);
	(a%5==0)?printf("%d is divisible by 5", a):printf("%d is not divisible by 5", a);
	getch();	
}





