#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1, sum=0, square;
	x: if(i<=10){
		square= i*i;
		printf("%d\n", square);
		sum = sum + square;
	}
	i++;
	if(i<=10)
	goto x;
	printf("The sum of squares of 1 to 10 is = %d\n", sum);
	getch();
}
