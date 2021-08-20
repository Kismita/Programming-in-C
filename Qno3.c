#include<stdio.h>
int main(){
	int n,a,b,d,c,sum;
	printf("Enter the 3 digit number :");
	scanf("%d",&n);
	a = n/100;
	d = n%100;
	b = d/10;
	c = n%10;
	printf(" .The first digit is %d\n. The second digit is %d\n. The third digit is %d\n",a,b,c);
	sum = c*100 + b*10 + a;
	printf(" .The number in reverse order is %d",sum);
	return 0;

}
