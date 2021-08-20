#include<stdio.h>
#include<math.h>
int main()
{
	float num,square,cube;
	printf("Enter the number :");
	scanf("%f",&num);
	square = pow(num,2);
	cube = pow(num,3);
	printf("The square of the number is %.3f\n",square);
	printf("The cube of the number is %.3f",cube);
	return 0;
}
