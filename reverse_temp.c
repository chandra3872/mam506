#include<stdio.h>
void main() {
	int size,temp;
	printf("enter the size and the number: ");
	scanf("%d",&size);
	int a[size];
	for(int i=0;i<size;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<size/2;i++) {
		temp=a[i];
		a[i]=a[size-1-i];
		a[size-1-i]=temp;
	}
	for(int i=0;i<size;i++)
		printf("%d",a[i]);
}

