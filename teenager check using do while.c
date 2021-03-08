#include<stdio.h>
int main()
{
	int age;char response;
	do{printf("enter age:");
	scanf("%d",&age);
	if(age>=13 && age<=19)
		printf("teenage");
	else
		printf("not teenage");
	
	printf("do you want to continue?(y/n)");
	scanf("%c",&response);
	}
	while(response=='y' || response=='Y');
	return 0;
}
