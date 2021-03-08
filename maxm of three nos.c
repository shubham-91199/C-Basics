#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three nos:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	printf("a is maxm");
	else if(b>c)
	printf("b is maxm");
	else
	printf("c is maxm");
	return 0;
}
