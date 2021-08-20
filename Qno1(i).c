#include<stdio.h>
int main(){
	int dividend , divisor , quotient , remainder;
	dividend = 17;
	divisor = 5;
	quotient = dividend / divisor;
	remainder = dividend %divisor;
	printf("The quotient is %d\n",quotient);
	printf("the remainder is %d\n", remainder);
	return 0;
}
