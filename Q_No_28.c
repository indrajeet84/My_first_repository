#include<stdio.h>
#include<conio.h>
void main()
{
	int i, a, max, min;
	printf("Enter Ten numbers:\n");
    scanf("%d", &a);
	max=a;
	min=a;
	for(i=1; i<10; i++) 	
    { 	    
        scanf("%d", &a);
 		if(a>max)
		max=a;
		if(a<min)
		min=a;
	}
	printf("The sum of largest and smallest number is = %d", max+min);
}
