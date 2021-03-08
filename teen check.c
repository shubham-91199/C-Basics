#include<stdio.h>
int main()
{
	int age;
	printf("enter age:");
	scanf("%d",&age);
	if(age>=13 && age<=19)
	printf("you are teen");
	else if(age<13)
	printf("younger than teen");
	else
	printf("you are adult");
	return 0;
	
}
