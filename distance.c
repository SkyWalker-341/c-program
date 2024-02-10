#include <stdio.h>
#include <math.h>
int main ()
{
 int a,b;

printf("enter the value of x");
scanf("%d",&a);
printf("enter the value of y");
scanf("%d",&b);
float dist = sqrt(pow(a,2)+pow(b,2));
printf("distance is %f", &dist);
return 0;
}
