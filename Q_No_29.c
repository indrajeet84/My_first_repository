#include<stdio.h>
#include<conio.h>
void main(){
	int n, x, i, sum=0;
	printf("Enter any number:\n");
	scanf("%d", &n);
	for(i=n; i>0; i=i/10)
	{
		x=i%10;
		sum = sum + x;
		 
	}
	printf("The sum of all digit of given number is = %d.\n", sum);
	getch();
}

