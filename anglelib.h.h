double find_angle(int a1,int a2,int b1,int b2,int c1,int c2)
{
double value;
double angle;
value = ((a2*b1)-(a1*b2))/((a1*a2)+(b1*b2));
angle = atan( value);
return angle;
}
