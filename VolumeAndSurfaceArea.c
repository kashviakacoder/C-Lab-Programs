// VolumeAndSurfaceArea
#include<stdio.h>
#include<math.h>
#define pi 3.14159
int main()
{
float radius, volume, area;
printf("Enter radius:");
scanf("%f", &radius);
volume =(4.0/3.0)*radius*radius*radius*pi;
area = 4*radius*radius*pi;
printf("Volume of the sphere:%f \n",volume);
printf("The surface area of the sphere:%f \n",area);
return 0;
} //end main
