#include<stdio.h>
#include<conio.h>
void main(){
	int a, b, c, l, m, s;
	printf("Enter any three numbers:\n");
	scanf("%d %d %d", &a, &b, &c);
	if((a<b) && (a<c))
	{
		s=a;
		if(b<c)
		{
			m=b;
			l=c;
		}
		else{
			m=c;
			l=b;			
		}
		
	}
	else if((b<a) && (b<c))
	{
		s=b;
		if(a<c)
		{
			m=a;
			l=c;
		}
		else{
			m=c;
			l=a;			
		}
	}
	else
	{
		s=c;
		if(a<b)
		{
			m=a;
			l=b;
		}
		else{
			m=b;
			l=a;			
		}
	}
	printf("The numbers in assending order\n%d\n%d\n%d\n", s, m, l);
	getch();
}
