#include <stdio.h>
int main()
{
int a;

printf("Enter an integer number:\n");
scanf("%d", &a);

if(a>0)
printf("%d is Positive", a);

else if(a<0)
printf("%d is Negative", a);

else {printf("Input is Zero");}
return 0;
}
