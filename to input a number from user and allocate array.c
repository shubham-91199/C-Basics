#include<stdio.h>
int main()
{
	int n;
	int x[n];
	printf("enter size of array:");
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter element to index %d:",i);
		scanf("%d",&x[i]);
	}
	printf("content of array:\n");
	for(i=0;i<n;i++)
	{
		printf("x[%d]=%d\n",i,x[i]);
	}
	return 0;
}
