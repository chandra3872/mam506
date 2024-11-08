#include<stdio.h>
void main() {
	int a, b, c, d, n;
	printf("enter the value of n: ");
	scanf("%d", &n);
	a=0;
	b=1;
	c=0;
	d=1;
	printf("%d\n", b);
	while(d<=n-1) {
		c=a+b;
		printf("%d\n", c);
		a=b;
		b=c;
		d=d+1;
	}
	printf("\n");
}
