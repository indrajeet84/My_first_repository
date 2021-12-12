//Q_no_34

#include<stdio.h>
#include<conio.h>
void main(){
	int n, x, i, sum=0, mul=1;
	printf("Enter any number:\n");
	scanf("%d", &n);
	for(i=n; i>0; i=i/10)
	{
		x=i%10;
		if(x%2==0)
		sum = sum + x;
		else
		mul = mul*x;
	}
	printf("The sum of all even digit is = %d.\n", sum);
	printf("And the multiplication of all odd digit is = %d.\n", mul);
	getch();
}


