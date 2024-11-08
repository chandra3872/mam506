#include<stdio.h>
void main() {
	int i, j, n, s=0, p=1;
	printf("enter the length of binary number: ");
	scanf("%d", &n);
	int a[n];
	for(i=n-1;i>=0;i--) {
		scanf("%d", &a[i]);
	}
	for(j=0;j<=n-1;j++) {
		s = a[j]*p + s;
		p = p*2;
	}
	printf("%d\n", s);
}
