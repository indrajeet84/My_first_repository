#include<stdio.h>
#include<conio.h>
void main()
{
	int i, a, max;
	printf("Enter Ten numbers:\n");
    scanf("%d", &a);
	max=a;
	for(i=1; i<10; i++) 	
    { 	    
        scanf("%d", &a);
 		if(a>max)
		max=a;
	}
	printf("The largest number is %d", max);
}
