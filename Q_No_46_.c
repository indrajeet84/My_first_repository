//4 + 7 + 12 + 19 + ....... + n

#include<stdio.h>
#include<conio.h>
void main(){
	int i, n , sum=4, dif=3;
	printf("How many terms:\n");
	scanf("%d", &n);
	for(i=1; i<n; i++){
		sum = sum + dif;
		dif = dif + 2;
	}
	printf("The Sum of the series upto %d terms is = %d", n, sum);
	getch();
}
