#include<stdio.h>
 int main() 
{
 int a=5; 
 char b=6;
 //binary operator
 printf("%d \n",a+b);
 //conditional operator
 (a>b)?printf("a is big"):printf(" b is big\n");
 //relational operator
 printf("%d \n",a==b);
 printf("%d \n",a>=b);
 printf("%d \n",a<=b);
 
 // logical operator
 printf("%d \n",a&&b);
 printf("%d \n",a||b);
 printf("%d \n",a!=b);
 
 //bitwise operator
 
 printf("%d \n",a&b);
 printf("%d \n",a^b);
 printf("%d \n",a|b);
}
