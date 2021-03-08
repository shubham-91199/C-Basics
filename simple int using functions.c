#include<stdio.h>
double getsimpleinterest(double principal,double rate,double time)
	{double interest;
	interest=(principal*rate*time)/100;
	return interest;
	}
int main()
{double p,r,t,inte;
printf("enter the values of p,r,t:");
scanf("%lf",&p);
scanf("%lf",&r);
scanf("%lf",&t);
inte=getsimpleinterest(p,r,t);
printf("the interest is=%.02lf",inte);
inte=getsimpleinterest(5000.0,3.0,2);
printf("new interest=%0.2lf",inte);
return 0;	
}
