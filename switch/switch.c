#include <stdio.h>
int main()
{
float a,b,sum,sub,mul,div;
int choice;
printf("Enter two numbers");
scanf("%f%f", &a, &b);
printf("Enter your choice.\n1.Sum\n2.Sub\n3.Multi\n4.Division\n");

scanf("%d", &choice);

switch(choice)
{
    case 1:
    sum=a+b;
    printf("The sum is %f", sum);
    break;

    case 2:
    sub=a-b;
    printf("The sub is %f", sub);
    break;

    case 3:
    mul=a*b;
    printf("The multi is %f", mul);
    break;

    case 4:
    div=a/b;
    printf("The division is %f", div);
    break;

    default:
    printf("Invalid operation");
}

return 0;
}
