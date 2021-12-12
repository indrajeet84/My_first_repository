#include<stdio.h>
#include<conio.h>
void main()
{
	int n, x, i, binary = 0, place=1;
	printf("Enter any number:\n");
	scanf("%d", &n);
	for(i=n; i>0; i=i/2)
	{
		x=i%2;
		binary=binary+(x*place);
		place=place*10;
	}
	printf("Binary equivalent of %d is %d", n, binary);
	getch();
}
