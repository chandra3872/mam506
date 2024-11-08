#include<stdio.h>
void factorial(int n) {
	int f=1;
	for(int i=1;i<=n;i++)
		f=f*i;
	printf("%d",f);
}
void fibonacci(int n) {
	int a=0,b=1,c=1;
	for(int i=1;i<=n;i++) {
		printf("%d ",c);
		c=a+b;
		a=b;
		b=c;
	}
}

void main() {
	int n,task;
	printf("enter the value of n: ");
	scanf("%d",&n);
	printf("factorial:1 fibonacci:2");
	scanf("%d",&task);
	if(task==1)
		factorial(n);
	if(task==2)
		fibonacci(n);
}
