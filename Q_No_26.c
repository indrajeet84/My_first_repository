#include<stdio.h>
#include<conio.h>
void main()
{
	int i, n, sum=0;
	printf("Enter ten numbers:\n");
	for(i=1; i<=10; i++)
	{
		scanf("%d", &n);
		if(n%4==0)
		sum = sum + n;
	}
	printf("The sum of ten different numbers is %d\n", sum);
	getch();
}
