#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1, sum=0;
	x: if(i%2==1)
	sum = sum + i;
	i++;
	if(i<=25)
	goto x;
	printf("The sum of all odd numbers from 1 to 25 is = %d", sum);
	getch();
}
