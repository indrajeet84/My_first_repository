#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1;
	x: if(i<=50)
	printf("%d\n", i);
	i++;
	if(i<=50)
	goto x;
	getch();
}
