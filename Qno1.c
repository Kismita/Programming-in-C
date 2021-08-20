#include<stdio.h>
int main()
{
	int dividend,divisor,quotient ,remainder ;
	printf("Enter the dividend :");
	scanf("%d",&dividend);
	printf("Enter the divisior :");
	scanf("%d",&divisor);
	quotient = dividend / divisor ;
	remainder = dividend % divisor ;
	printf("The quotient is %d\n",quotient);
	printf("The remainder is %d\n",remainder);
	return 0 ;
}
