#include<stdio.h>
void main() {
	int a, b, c;
	printf("enter the three numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	if(a>b) {
		if(a>c) {
			printf("%d\n", a);
		}else{
			printf("%d\n", c);
		}
	}else{
		if(b>c) {
			printf("%d\n", b);
		}else{
			printf("%d\n", c);
		}
	}
}
