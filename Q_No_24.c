#include<stdio.h>
#include<conio.h>
void main(){
	int i, sum=0;
	printf("All Even numbers between 1 to 100:\n");
	for(i=1; i<=100; i++)
	{
		if(i%2==0)
		{
		printf("%d\n", i);
		sum = sum + i;	
		}
	}
	printf("The sum of all even numbers between 1 to 100 is = %d.\n", sum);
}
