#include<stdio.h>
void main() {
	int hour, minutes, am, pm;
	char ch1, ch2;
	am = 'A'*'M';
	pm = 'P'*'M';
	printf("enter the time in 12 hour format: ");
	scanf("%d:%d %c%c", &hour, &minutes, &ch1, &ch2);
	if(ch1*ch2==am) {
		if(hour == 12) {
			hour = 0;
			printf("%02d:%02d\n", hour, minutes);
		}else{
			printf("%02d:%02d\n", hour, minutes);
		}
	}
	if(ch1*ch2==pm) {
		hour = hour + 12;
		printf("%02d:%02d\n", hour, minutes);
	}
}
