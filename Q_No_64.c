#include<stdio.h>
#include<conio.h>
void main(){
	int n, a, i, p_ve=0, m_ve=0;
	printf("Enter the value of n:\n");
	scanf("%d", &n);
	printf("Enter %d numbers:\n", n);
	for(i=1; i<=n; i++){
		scanf("%d", &a);
		if(a<0)
		m_ve++;
		else
		p_ve++;
	}
	printf("The numbers of plus and minus digit is %d and %d", p_ve, m_ve);
	getch();
}



