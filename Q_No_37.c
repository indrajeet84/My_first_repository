//Q_no_37

#include<stdio.h>
#include<conio.h>
void main(){
	int a, i, x, rev=0;
	printf("Enter any number:\n");
	scanf("%d", &a);
	for(i=a; i>0; i=i/10)
	{
		x = i%10;
		rev = rev*10+x;
	}
	if(rev==a)
	printf("%d is a palindrome number.\n", a);
	else
	printf("%d is not a palindrome number.\n", a);
	getch();
}


