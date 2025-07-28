// MoreOperations
#include<stdio.h>
int main()
{
int a=30, b=10, c=5, d=15;
int exp1, exp2, exp3, exp4;
exp1 = (a + b) * c / d ;
exp2 = ((a + b) * c) / d;
exp3 = a + (b * c) / d;
exp4 = (a + b) * (c / d);
printf("a=%d,b=%d,c=%d,d=%d\n",a,b,c,d);
printf("exp1 = (a + b) * c / d = %d\n",exp1);
printf("exp2 = ((a + b) * c) / d = %d\n",exp2);
printf("exp3 = a + (b * c) / d = %d\n",exp3);
printf("exp4 = (a + b) * (c / d) = %d\n",exp4);
return 0;
} //end main
