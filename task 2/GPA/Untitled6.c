#include <stdio.h>
int main()

{
int a;
printf("Enter mark\n");
scanf("%d", &a);

if(a>=40 && a<100)
{printf("Passed");}

else
{
if (a>=0 && a<40){printf("Fail");}
else {printf("Wrong input");}
}

return 0;
}
