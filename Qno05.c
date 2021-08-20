#include<stdio.h>
int main()
{
	int p;
	float r,t,i;
	printf("Enter the principal : Rs.");
	scamf("%d",&p);
	printf("Enter the rate :");
	scanf("%f",&r);
	printf("Enter the time :");
	scanf("%f",&t);
	i = (p*t*r)/100;
	printf("The simple intrest is Rs.%f",i);
	return 0;
}
