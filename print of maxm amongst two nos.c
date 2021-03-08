#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two nos:");
	scanf("%d",&a);
	scanf("%d",&b);
	if(a>b)
	{
		printf("a is maximum");
	}
	else if(a<b)
	{
		printf("b is maximum");
	}
	else
	{
		printf("a is equal to b");
	}
	return 0;
}
