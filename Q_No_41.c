//Q_no_41

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	int i, n, x;
	float sum, y, f=1;
	printf("Enter the value of x and n:\n");
	scanf("%d %d", &x, &n);
	sum=x;
	for(i=1; i<=n; i++){
		f=f*i;
		if(i%2==0){	
		y=pow(x,i);
		sum=sum+(y/f);
		}
		else if(i==n){	
		y=pow(x,i);
		sum=sum+(y/f);
		}
	}
	printf("The sum of the series upto %d term is = %f", n, sum);
	getch();
}
