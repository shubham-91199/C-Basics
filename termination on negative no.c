#include<stdio.h>
int main()
{
	int n,sum;
	printf("enter the limit upto which the sum is to be done:");
	scanf("%d",&n);
	sum=0;
	while(n>=0)
		{
			sum=sum+n;
			printf("enter negative no. to terminate");
			scanf("%d",&n);
		}
	printf("the sum of the %d nos is %d",n,sum);
	return 0;
	
	
}
