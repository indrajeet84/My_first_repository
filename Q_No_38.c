//Q_no_38

#include<conio.h>
#include<stdio.h>
void main(){
	int n, i, r, s=0;
	printf("Enter integer no:\n");
	scanf("%d", &n);
	for(i=n; i>0; i=i/10)
	{
		r=i%10;
		s=s+(r*r*r);
	}
	if(s==n)
	printf("%d is an armstrong number.\n", n);
	else
	printf("%d is not an armstrong number.\n", n);
	getch();
}
