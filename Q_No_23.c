#include<stdio.h>
#include<conio.h>
void main()
{
	int n, x, i, r=0, m=1;
	printf("Enter any number:\n");
	scanf("%d", &n);
	for(i=n; i>0; i=i/8)
	{
		x=i%8;
		r=r+x*m;
		m=m*10;	
	}
	printf("octal equivalent of %d is %d", n, r);
	getch();
}
