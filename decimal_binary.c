#include<stdio.h>
void main() {
	int n, s=0, p=1, a=0, b=0;
	printf("enter the decimal number: ");
	scanf("%d", &n);
	while(n>0) {
		a=n%2;
		s=a*p+s;
		p=p*10;
		n=n/2;
	}
	printf("%d\n",s);
} 
