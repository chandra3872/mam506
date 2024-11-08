#include<stdio.h>
int main() {
	int n, a = 1, b = 0;
	printf("enter the value of n: ");
	scanf("%d", &n);
	while(a <= n) {
		b = a * a;
		printf("%d %d\n", a, b);
		a = a+ 1;
	}
	return 0;
}
