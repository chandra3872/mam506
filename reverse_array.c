#include<stdio.h>
void main() {
	int n,a,p=10,b;
	printf("enter the length of the number and the number: ");
	scanf("%d %d",&n,&a);
	int A[n];
	for(int i=n-1;i>=0;i--) {
		b=a%p;
		A[i]=b;
		a=a/10;
	}
	for(int j=n-1;j>=0;j--) {
		printf("%d",A[j]);
	}
	printf("\n");
}
