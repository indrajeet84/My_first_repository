//Q_no_49

#include<stdio.h>
#include<conio.h> 
void main()
{
    int n, t, d1, d2, d3;
    printf("The all Armstrong numbers between 1 and 1000 is:\n");
    for(n=001; n<1000; n++)
    {
        d1 = n - ((n / 10) * 10);
        d2 = (n / 10) - ((n / 100) * 10);
        d3 = (n / 100) - ((n / 1000) * 10);
        t = (d1*d1*d1) + (d2*d2*d2) + (d3*d3*d3);
        if(t == n)
            printf("Armstrong no is = %d\n", t);
    }
    getch();
}
