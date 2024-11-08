#include<stdio.h>
void main() {
	int n,r,a=1,b=1,p,q=0;
	float c;
	printf("enter the values of n and r: ");
	scanf("%d %d", &n, &r);
	p=n-r+1;
	while(p<=n) {
		a=a*p;
		p=p+1;
	}
	while(q<r) {
		q=q+1;
		b=b*q;
	}
	c=a/b;
	printf("%f\n",c);
}
