//Q_no_43

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	int i, n, x, sum=1, y;
	printf("Enter the value of x and n:\n");
	scanf("%d %d", &x, &n);
	for(i=1; i<=n; i++){
		if(i%2==0){	
		y=pow(x,i);
		sum=sum+y;
		}
		else if(i==n){	
		y=pow(x,i);
		sum=sum+y;
		}
	}
	printf("The sum of the series upto %d term is = %d", n, sum);
	getch();
}
