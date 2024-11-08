#include<stdio.h>
void main() {
	int n, a=0, b=1, c=0;
	printf("enter the value of n: ");
	scanf("%d", &n);
	while(a<n) {
		c=b+c;
		b=b+2;
		a=a+1;
	}
	printf("%d\n", c);
}
