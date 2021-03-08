#include<stdio.h>
int main()
{
	int x[4][3];
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			x[i][j]=i*j;
		}
	}
	printf("content of 2d array:");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%4d",x[i][j]);
		}
		printf("/n");
	}
	printf("/n");
	return 0;
}
