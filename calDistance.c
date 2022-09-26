#include<stdio.h>
#include<math.h>
#include "distance.h"

int main()
{
double lat1,lon1,lat2,lon2;
printf("enter the Latitude and Longitude values of Bhopal\n");
scanf("%lf%lf",&lat1,&lon1);
printf("The Latitude %lf N and Longitude %lf E of Bhopal\n",lat1,lon1);
printf("enter the  Latitude and Longitude values of Bangalore as\n");
scanf("%lf%lf",&lat2,&lon2);
printf("The Latitude %lf N and Longitude %lf E of Banglore",lat2,lon2);

double distance = find_distance(lat1,lon1,lat2,lon2);
printf("\n Distance Between Saurabh Sir and Prateek Sir: %lf  km \n",distance);
return 0;

}
