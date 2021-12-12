#include<stdio.h>
#include<conio.h>
void main(){
	int n, x, i, r=0;
	printf("Enter any number:\n");
	scanf("%d", &n);
	for(i=n; i>0; i=i/10)
	{
		x=i%10;
		r=r*10+x;
	}
	printf("The reverse of %d is %d.\n", n, r);
	getch();
}

