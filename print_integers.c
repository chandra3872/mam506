#include<stdio.h>
int main() {
	int n;
	int counter = 1;
	printf("enter the value of n: ");
	scanf("%d", &n);
	while(counter < n) {
		printf("%d ", counter);
		counter = counter + 1;
	} 
	printf("%d\n", n);
	return 0;
}
