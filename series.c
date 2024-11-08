#include<stdio.h>
void main() {
	int n,a=0,b=1,c=1,d=1,p=0;
	printf("enter the value of n: ");
	scanf("%d", &n);
	while(a<n) {
		d=-d;
		c=p+c;
		b=b+2;
		p=d*b;
		a=a+1;
	}
	printf("%d\n",c);
}
