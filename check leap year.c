#include<stdio.h>
int main()
{
	int year;
	printf("enter year:");
	scanf("%d",&year);
	if(year%4==0)
		if(year%100==0)
			if(year%400==0)
			printf("yes leap year");
			else
			printf("not leap year");
		else
		printf("yes leap year");
	else
	printf("not leap year");
	return 0;
}
