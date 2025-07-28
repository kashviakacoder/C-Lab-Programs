// SimpleAndCompundInterest
#include<stdio.h>
#include<math.h>
int main()
{
float P, N , R, SI , CI;
printf("Enter Principle Amount:");
scanf("%f", &P);
printf("Enter Rate of interest:");
scanf("%f", &R);
printf("Enter Time:");
scanf("%f", &N);
SI = P*N*R/100;
CI = P*pow((1+R/100),N)-P;
printf("The Simple interest: %f \n",SI);
printf("The Compound interest: %f \n",CI);
return 0;
} //end main
