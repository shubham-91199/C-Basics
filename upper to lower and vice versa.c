#include<stdio.h>
int main()
{
	char ch;
	printf("enter a alphabet:");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
	{ch=ch+32;
	printf("the corresponding lower case is :%c\n",ch);
	}
	else if(ch>='a' && ch<='z')
	{ch=ch-32;
	printf("the corresponding uppercase case is:%c\n",ch);
	}
	else
	{
	printf("the given character is not alphabetic");
	}
	return 0;
	
}
