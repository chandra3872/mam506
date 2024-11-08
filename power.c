#include<stdio.h>
#include<math.h>
void main() {
	int n,p,ans;
	printf("enter the value of n and p:");
	scanf("%d %d",&n,&p);
	for(int i=1;i<=n;i++) {
		ans = pow(i,p);
		printf("%d ",ans);
	}
}
