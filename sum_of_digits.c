#include<stdio.h>
void main() {
	int n, a=0, r=0;
	printf("enter the value of n: ");
	scanf("%d", &n);
	while(n > 0) {
		r = n % 10;
		a = a + r;
		n = n / 10;
	}
	printf("%d\n", a);
} 
