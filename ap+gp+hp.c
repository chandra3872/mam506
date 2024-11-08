#include<stdio.h>
void main() {
	int a,r,n;
	printf("enter the value of a,r,n: ");
	scanf("%d %d %d",&a,&r,&n);
	printf("AP:");
	for(int i=1,a0=a,r0=r;i<=n;i++) {
		printf("%d ",a0);
		a0=a0+r0;
	}
	printf("\nHP:");
	for(int i=1,a0=a,r0=r;i<=n;i++) {
		printf("1/%d ",a0);
		a0=a0+r0;
	}
	printf("\nGP:");
	for(int i=1,a0=a,r0=r;i<=n;i++) {
		printf("%d ",a0);
		a0=a0*r0;
	}

}
