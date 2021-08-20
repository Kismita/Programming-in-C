#include<stdio.h>
#include<math.h>
int main()
{
	float x,x1,b;
	printf("Enter the value of x : ");
	scanf("%f",&x);
	x1 = x*(3.14/100);
	b = cos(x1);
	printf("The value of cosx is %.3f.",b);
	return 0 ;
}
