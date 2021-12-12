#include<stdio.h>
#include<conio.h>
void main()
{
	int i, n, sum=0, avg;
	printf("Enter ten numbers:\n");
	for(i=1; i<=10; i++)
	{
		scanf("%d", &n);
		sum = sum + n;
	}
	avg = sum/10;
	printf("The sum and average of ten different numbers is %d and %d\n", sum, avg);
	getch();
}
