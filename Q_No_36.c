//Q_no_36

#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b, n, i, c;
	printf("How many terms:\n");
	scanf("%d", &n);
	a=0;
	b=1;
	printf("%d %d",a,b);
	for(i=2; i<n; i++)
	{
		c=a+b;
		printf(" %d", c);
		a=b;
		b=c;
	}
	getch();
}
