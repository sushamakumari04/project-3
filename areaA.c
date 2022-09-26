#include<stdio.h>
#include<math.h>
#include"findArea.h"

int main()
{
double x1,y1,x2,y2,x3,y3;
printf("Enter the coordinates of shape A\n");
printf("enter the first coordinate \n");
scanf("%lf %lf",&x1,&y1);
printf("enter the second coordinate \n");
scanf("%lf %lf",&x2,&y2);
printf("enter the third coordinate \n");
scanf("%lf%lf",&x3,&y3);
double area_under_A = find_area(x1,y1,x2,y2,x3,y3);
printf("area to be coloured black : %lf \n",area_under_A);
return 0;
}
