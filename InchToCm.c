// InchToCm.c
#include<stdio.h>
int main()
{
 float centimeters, inches;
 printf("This program converts inches to centimeters\n");
 printf("Enter a number \n");
 scanf("%f",&inches);
 centimeters = inches*2.54;
 printf("%f inches is equivalent to %f centimerters \n",inches, centimeters);
 return 0;
} // end main
