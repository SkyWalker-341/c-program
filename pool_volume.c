#include <stdio.h>
#include <math.h>
int main()
{
 int length,width,depth,volume;
 printf("enter the length value ");
 scanf("%d",&length);
 printf("enter the width value ");
 scanf("%d",&width);
 printf("enter the depth value ");
 scanf("%d",&depth);
 volume = length*width*depth;
 printf("the pool volume is %d",volume);
 return 0;
 }
