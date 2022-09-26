double find_area(double x1,double y1,double x2,double y2,double x3,double y3)
{
double Area;
double cd = x1*(y2-y3)+ x2*(y3-y1)+ x3*(y1-y2) ;
if(cd<0)
{
  cd=cd*(-1);
}
Area = 0.5*cd;
return Area;
}
