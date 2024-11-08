#include<stdio.h>
void main() {
	int n, i = 0, p = 0;
	printf("enter the value of n: ");
	scanf("%d", &n);
	while(i < n) {
		i = i + 1;
		p = p + i;
	}
	printf("%d\n", p);
}
