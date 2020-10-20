#include <stdio.h>
int main()
{
float a,b,c,i;
while (i<=10)
{

printf("Enter weight \n");
scanf("%f", &a);

printf("Enter height \n");
scanf("%f", &b);

c=a/(b*b);

printf("The BMI is %f \n", c);
i++;
}
return 0;

}
