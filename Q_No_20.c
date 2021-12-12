#include<stdio.h>
#include<conio.h>
void main(){
	int a, n, x, r=0;
	printf("Enter any number:\n");
	scanf("%d", &n);
	a=n;
	y: if(n>0){
		x=n%10;
		r=r*10+x;
		n=n/10;
	}
	if(n>0)
	goto y;
	printf("The reverse of %d is %d.", a, r);
}
