// convertFarToCes
#include<stdio.h>
int main()
{
float C,F;
printf("Enter Temperature in Fahrenheit:");
scanf("%f", &F);
C=5.0/9.0*(F-32);
printf("The temperature in Centigrade is:%f \n",C);
return 0;
} //end main
