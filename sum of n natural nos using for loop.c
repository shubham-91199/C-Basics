#include<stdio.h>
int main()
{
	int i,n,sum;
	printf("enter no.");
	scanf("%d",&n);
	for(i=1,sum=0;i<=n;sum=sum+i,i++)
	printf("sum of first %d natural nos is %d\n",n,sum);
	return 0;
}
