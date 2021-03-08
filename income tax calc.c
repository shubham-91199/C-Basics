#include<stdio.h>
int main()
{
	double income,tax;
	printf("enter income:");
	scanf("%lf",&income);
	if(income<10000)
	tax=0.0;
	else if(income>=10000 && income<20000)
	tax=0.1*income;
	else if(income>=20000 && income<50000)
	tax=0.2*income;
	else if(income>=50000)
	{tax=0.25*income;
	tax=tax+tax*0.1;}
	printf("your income is %lf and tax implied on it is 0.2%lf",income,tax);
	return 0;
}
