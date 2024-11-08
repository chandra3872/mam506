#include<stdio.h>
float largest(float a,float b,float c) {
	if(a>b)
		if(a>c)
			return a;
		else
			return c;
	else
		if(b>c)
			return b;
		else
			return c;
}
void main() {
	float a,b,c;
	printf("enter the three numbers: ");
	scanf("%f %f %f",&a,&b,&c);
	printf("%f",largest(a,b,c));
}
