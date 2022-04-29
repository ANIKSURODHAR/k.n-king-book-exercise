#include<stdio.h>
#include <stdlib.h>
double average(double x,double y);
int main()
{ double a,b,c;
  scanf("%lf %lf %lf",&a,&b,&c);
  printf("Avarage of %g and %g : %g",a,b,average(a,b));
  printf("Avarage of %g and %g : %g",b,c,average(b,c));
  printf("Avarage of %g and %g : %g",a,c,average(a,c));

  return 0;
}
double average(double x,double y)
{
return (x+y)/2;
}
