//Q_no_40

#include<stdio.h>
#include<conio.h>
void main(){
	int i, n;
	float E=1, x, f=1;
	printf("How many terms:\n");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		f=f*i;
		x=(i*i)/f;
		E=E+x;
	}
	printf("The sum of the series upto %d term is = %f", n, E);
	getch();
}
