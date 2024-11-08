#include<stdio.h>
void main() {
	int n, a, largest, counter;
	printf("enter the que starting with no of elements ");
	scanf("%d %d", &n, &a);
	largest = a;
	counter = 1;
	while(counter < n) {
		scanf(" %d", &a);
		counter = counter + 1;
		if(a > largest) {
			largest = a;
		}
	}
	printf("the largest value is: %d\n", largest);
}
