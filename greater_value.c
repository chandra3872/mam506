#include<stdio.h>
void main() {
	float a, b;
	printf("enter the values of a and b: ");
	scanf("%f %f", &a, &b);
	if(a == b) {
		printf("%f = %f\n", a, b);
	}
	else {
		if(a > b) {
			printf("%f > %f\n", a, b);
		} else {
			printf("%f < %f\n", a, b);
		}
	}
}
