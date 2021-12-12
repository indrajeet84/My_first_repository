//Q_no_48

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int dn=0, r, i, on, n;
	printf("Enter any number:\n");
	scanf("%d", &on);
	n=on;
	for(i=0; n>0; i++)
	{
		r=n%10;
		dn=dn+(r*pow(8,i));
		n=n/10;
	}
	printf("decimal equivalent of %d is %d", on, dn);
	getch();
}

