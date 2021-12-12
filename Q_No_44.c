//Q_no_44

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	int i, n, x, sum=1;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		if(i%2==0){	
		x=pow(i,2);
		sum=sum+x;
		}
		else if(i==n){	
		x=pow(i,2);
		sum=sum+x;
		}
	}
	printf("The sum of the series upto %d term is = %d", n, sum);
	getch();
}





