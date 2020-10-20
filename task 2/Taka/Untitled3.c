#include <stdio.h>
int main()
{
int a,b,c,d;

printf("Enter a four digit integer number:\n");
scanf("%d", &a);
if (a<10000 && a>0)
{


b=a/1000;

printf("%d thousands,", b);

c=(a%1000)/100;
printf("%d hundreds ", c);

d=a%100;

printf("and %d Taka only", d);}

else {printf("Wrong input");}

return 0;

}
