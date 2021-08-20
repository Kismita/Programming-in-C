#include<stdio.h>
int main()
{ 
int day1 , month , b , yrs , day2 ;
printf("Enter the no of days :");
scanf("%d",&day1);
yrs = day1/365;
b =day1%365;
month = (day1%365)/30;
day2 = b%30;
printf("The answer is %d months and %d days",yrs,month,day2);
return 0;
}
