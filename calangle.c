#include<stdio.h>
#include<math.h>
#include "anglelib.h"

int main()
{
int a1,b1,c1,a2,b2,c2;
printf("Enter the coefficient of the first lines\n");
scanf("%d%d%d",&a1,&b1,&c1);
printf("Enter the coefficent of second line \n");
scanf("%d%d%d",&a2,&b2,&c2);
double angle_at_chowk=find_angle(a1,a2,b1,b2,c1,c2);
printf("Angle at which these roads meets at 123 Chowk is  %f\n",angle_at_chowk);
printf("Angle in degree is %f",angle_at_chowk*180/3.14);
return 0;
}

