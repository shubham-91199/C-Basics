#include<stdio.h>
int main()
{
	int count;
	char response;
	for(count=1;count<=100;count++)
	{printf("count=%d",count);
	printf("print next?enter y to continue and any other key to terminate");
	scanf("%c",&response);
	if(response !='Y' && response !='y')
		break;	
	}
	printf("terminated at count=%d\n",count);
	return 0;
}
	
