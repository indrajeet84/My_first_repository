//Q_no_31

#include<stdio.h>
#include<conio.h>
void main(){
	int n, i, x=0;
	printf("Enter any number:\n");
	scanf("%d", &n);
	for(i=2; i<=n/2; i++)
	{
		if(n%i==0){
			x++;
			break;
		}
	}
	if(x==0 && n!=1)
	printf("%d is a prime number.\n", n);
	else
	printf("%d is not a prime number.\n", n);
	getch();
}
