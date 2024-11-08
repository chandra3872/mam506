#include<stdio.h>
void main() {
	int n;
	int a = 1, b = 1;
	printf("how many rows do you want?\n");
	scanf("%d", &n);
	while(a <= n) {
		while(b <= a) {
			printf("*");
			b = b + 1;
		}
		printf("\n");
		b = 1;
		a = a + 1;

	}
}
