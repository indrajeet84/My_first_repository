//Q_no_50

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	float sqrt, i;
	printf("The square root of 1 to 20 is:\n");
	for(i=1; i<=20; i++)
	{
		sqrt=pow(i,0.5);
		printf("%f\n", sqrt);
	}
	getch();
}
