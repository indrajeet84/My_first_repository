#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("Enter any number beetween 0 and 255:\n");
	scanf("%d", &a);
	if((a>=48) && (a<=57))
	printf("%c", a);
	else if((a>=65) && (a<=90))
	printf("%c", a);
	else if((a>=97) && (a<=122))
	printf("%c", a);
	else
	printf("%c", a);
	getch();
}



