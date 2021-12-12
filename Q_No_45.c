//Q_no_45

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	int i, n, x, z=1;
	float sum=1, y, f=1;
	printf("Enter the value of x and n:\n");
	scanf("%d %d", &x, &n);
	for(i=1; i<=n; i++){
		f=f*i;
		if(i%2==0){	
		y=pow(x,i);
		z=-z;
		sum=sum+z*(y/f);
		}
		else if(i==n){	
		y=pow(x,i);
		z=-z;
		sum=sum+z*(y/f);
		}
	}
	printf("The sum of the series upto %d term is = %f", n, sum);
	getch();
}
