#include<stdio.h>
void main() {
	int n, a=0, p=1;
	printf("enter the value of n: ");
	scanf("%d", &n);
	while(a < n) {
		a = a + 1;
		p = p * a;
	}
	printf("%d\n", p);
}
