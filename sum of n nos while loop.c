#include<stdio.h>
int main()
{
	int i,n,sum;
	printf("enter the limit upto which the sum is to be done:");
	scanf("%d",&n);
	i=1;
	sum=0;
	while(i<=n)
		{
			sum=sum+i;
			i++;
		}
	printf("the sum of the %d nos is %d",n,sum);
	return 0;
	
	
}
