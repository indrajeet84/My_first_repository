//Q_no_32

#include<stdio.h>
#include<conio.h>
void main(){
	int i, n, f=1;
	printf("Enter the value of N:\n");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	f=f*i;
	printf("Factorial of %d is = %d.\n", n, f);
	getch();
}




