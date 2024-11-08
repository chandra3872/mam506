#include<stdio.h>
void main() {
	int Y,M;
	printf("enter the year and month: ");
	scanf("%d %d",&Y,&M);
	if(M<=7) {
		if(M%2!=0) {
			printf("31\n");
		}else{
			if(M==2) {
				if(Y%4==0) {
					printf("29\n");
				}else{
					printf("28\n");
				}
			}else{
				printf("30\n");
			}
		}
	}
	if(M>7) {
		if(M%2==0) {
			printf("31\n");
		}else{
			printf("30\n");
		}
	}
}
