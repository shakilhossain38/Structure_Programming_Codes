#include <stdio.h>
int main()
{
float A, B;

printf("Enter a number:\n");
scanf("%f", &A);

printf("Enter a number:\n");
scanf("%f",&B);

A=A+B;
B=A-B;
A=A-B;

printf("After swapping A is %0.3f\n", A);
printf("After swapping B is %0.3f", B);

return 0;
}
