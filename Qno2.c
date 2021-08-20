#include<stdio.h>
int main(){
	int n, a, b, c, d, sum;
	printf("Enter a 3 digit number :");
	scanf("%d",&n);
	a = n/100;
	d = n%100;
	b = d/10;
	c = n%10;
	printf("First digits is %d\n second digit is %d\n",a,b,c);
	sum = a+b+c;
	printf("The sum is %d",sum);
	return 0;

}
