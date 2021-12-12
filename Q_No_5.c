#include<stdio.h>
#include<conio.h>
void main(){
	int a, b, c, l, s;
	printf("Enter any three numbers:\n");
	scanf("%d %d %d", &a, &b, &c);
	if((a>b)&&(a>c))
 	l=a;
	else if(b>c)
	l=b;
	else
	l=c;
	if((a<b)&&(a<c))
	s=a;
	else if(b<c)
	s=b;
	else
	s=c;
	printf("The sum of largest number %d and smallest number %d is = %d", l, s, l+s);
	getch();
}




