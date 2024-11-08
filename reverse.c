#include<stdio.h>
void main() {
	int n,a=0;
	printf("enter the value of n: ");
	scanf("%d", &n);
	while(n>0) {
		a = n%10;
		printf("%d", a);
		n = n/10;
	}
	printf("\n");
}
