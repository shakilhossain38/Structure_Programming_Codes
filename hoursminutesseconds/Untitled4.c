#include <stdio.h>
int main()
{
int a,h,m,s;

printf("Enter number of seconds\n");
scanf("%d", &a);

h=a/3600;
printf("%d hours,", h);

m=(a%3600)/60;
printf("%d minutes ", m);

s=a%60;
printf(" and %d seconds", s);

return 0;
}
