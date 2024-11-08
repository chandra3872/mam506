#include<stdio.h>
int main() {
	int n;
	int b = 0;
	int a = 0;
	printf("enter the value of n: ");
	scanf("%d", &n);
	while(a < 10) {
		a = a + 1;
		b = n * a;
		printf("%d * %d = %d\n", n, a, b);
	}
	return 0;
}
