#include<stdio.h>
int main() {
	int a, b, c;
	float d, average;
	printf("enter the values: ");
	scanf("%d %d %d", &a, &b, &c);
	d = a + b + c;
	average = d / 3;
	printf("%f\n", average);
	return 0;
}
