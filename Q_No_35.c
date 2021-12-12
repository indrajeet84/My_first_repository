//Q_no_35

#include<stdio.h>
#include<conio.h>
void main(){
	int a, x, i, sum=0, mul=1;
	float n, b;
	printf("Enter any float number:\n");
	scanf("%f", &n);
	a=n;
	b=(n-a)*1000000;
	for(i=a; i>0; i=i/10)
	{
		x=i%10;
		sum = sum + x;
	}
	for(i=b; i>0; i=i/10)
	{
		x=i%10;
		if(x!=0)
		mul = mul * x;
	}
	printf("The sum of all integer digit is = %d.\n", sum);
	printf("The multiplication of all fraction digit is = %d.\n", mul);
	getch();
}
