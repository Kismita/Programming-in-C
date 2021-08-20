#include<stdio.h>
int main()
{ 
   float byte , kb , mb;
   printf("Enter the number of bytes :");
   scanf("%f",&byte);
   kb = byte/1024;
   mb = kb/1024;
   printf("The given number of bytes is %f KB.\n",kb);
   printf("The givern number of bytes is %f MB.\n",mb);
   return 0 ;

   }
