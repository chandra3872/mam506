#include<stdio.h>
void main() {
	int a[100],n,i=0;
	printf("enter the decimal number: ");
	scanf("%d",&n);
	while(n>0) {
		a[i]=n%2;
		n=n/2;
		i++;
	}
	for(i=i-1;i>=0;i--) {
		printf("%d",a[i]);
	}
	printf("\n");
}
