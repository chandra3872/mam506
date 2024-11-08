#include<stdio.h>
void main() {
	int n, a, p=1, s=0;
	printf("enter the binary number: ");
	scanf("%d", &n);
	while(n>0) {
		a = n%10;
		s = a*p + s;
		p = p*2;
		n = n/10;
	}
	printf("%d\n", s);
} 
