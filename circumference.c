#include<stdio.h>
 int main() 
{
  int rad;
   float PI=3.14,area,Circumference;
  printf("\nEnter radius of circle: ");
  scanf("%d", &rad);
  Circumference = 2*PI*rad;
  printf("\nCircumference : %f ", Circumference);
}
