#include<stdio.h>
void main() {
	int n,a=2,b=2,c;
	printf("enter the value of n: ");
	scanf("%d",&n);
	while(b<=n) {
		a=2;
		while(a<b) {
			c=b%a;
			if(c==0) {
				break;
			}else{
				a=a+1;
			}
		}
		if(a==b) {
			printf("%d ",b);
		}
		b=b+1;
	}
}
