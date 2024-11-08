#include<stdio.h>
void main() {
	int n,a=2,b;
	printf("enter the number: ");
	scanf("%d",&n);
	if(n==0) {printf("this is niether prime nor composite\n");}
	if(n==1) {printf("this is niether prime nor composite\n");}
	while(a<n) {
		b=n%a;
		if(b==0) {
			printf("this is a composite number\n");
			break;
		}else{
			a=a+1;
		}
	}
	if(a==n) {printf("this is a prime number\n");}
}
