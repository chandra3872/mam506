#include<stdio.h>
void main() {
	int n;
	printf("enter the length of the word/number and the word/number: ");
	scanf("%d ",&n);
	char a[n];
	for(int i=0;i<n;i++) {
		scanf("%c",&a[i]);
	}
	for(int j=n-1;j>=0;j--) {
		printf("%c",a[j]);
	}
	printf("\n");
}
