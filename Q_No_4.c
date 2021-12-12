#include<stdio.h>
#include<conio.h>
void main(){
	int a, b;
	char ch;
	printf("Enter + to add\n- to subtract\n/ to  Divide\n* to Multiply\n"); 
	ch=getch();
	printf("%c\n", ch);
	printf("Now Enter the two numbers:\n");
	scanf("%d %d", &a, &b);
	if(ch=='+')
	printf("Sum = %d.\n", a+b);
	else if(ch=='-')
	printf("Difference = %d.\n", a-b);
	else if(ch=='*')
	printf("Multiplication = %d.\n", a*b);
	else if(ch=='/')
	printf("Division = %d.\n", a/b);	
	else if(ch=='%')
	printf("Reminder = %d.\n", a%b);
	else
	printf("Invalid Entery:\n");
	getch();
}






