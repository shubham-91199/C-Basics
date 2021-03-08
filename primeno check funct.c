#include<stdio.h>
void isprime(int);
void main()
{int n;
printf("enter number:");
scanf("%d",&n);
isprime(n);

}
void isprime(int n)
{int i;
int c=0;
for(i=1;i<=n;i++)
{if(n%i==0)
c++;
}
if(c==2)
printf("prime");
else
printf("not prime");
}


