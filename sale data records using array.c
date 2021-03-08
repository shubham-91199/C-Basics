#include<stdio.h>
int main()
{
	int r,c;
	printf("enter no. of salesperson:");
	scanf("%d",&r);
	printf("enter no of items:");
	scanf("%d",&c);
	printf("\n\n\n");
	double saledata[r][c];
	printf("enter sale data:\n\n");
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("sale amount for sales person no.%d item no.%d:");
			scanf("%lf",&saledata[i][j]);
		}
		printf("______________________\n");
		printf("sale data\n");
		printf("______________________\n");
		double total=0.0;
		for(i=0;i<r;i++)
		{
			printf("sale data for sale person no.%d\n",i+1);
			total=0.0;
			for(j=0;j<c;j++)
			{
				printf("\titem %d:$%0.2lf\n",j+1,saledata[i][j]);
				total=total+saledata[i][j];
			}
			printf("\tTotal:$%0.2lf\n",total);
		}
		printf("\n\n\n");
	}
	return 0;
}
