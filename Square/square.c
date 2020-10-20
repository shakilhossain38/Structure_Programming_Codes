#include <stdio.h>
#include <math.h>
#define pi 3.1416
int main()
{
float x1,x2,y1,y2,a,d,c,g;

printf("Enter end point of x1, y1,x2,y2:\n");
scanf("%f%f%f%f", &x1, &y1, &x2, &y2);


c=(x2-x1)*(x2-x1);
g=(y2-y1)*(y2-y1);

d=sqrt(c+g);
printf("Distance is %f", d);

a=d*d;

printf("Area is %f ",  a);


return 0;
}
