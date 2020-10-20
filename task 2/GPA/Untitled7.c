#include <stdio.h>
int main()

{
    int a;
    printf("Enter mark\n");
    scanf("%d", &a);
    if(a<=100 && a>=0)
{
    if(a>=80)
    printf("Grade:A+,GPA:4.00");

    else if(a<=79 && a>=75)
    printf("Grade:A,GPA:3.75");

    else if(a<=74 && a>=70)
    printf("Grade:A-,GPA:3.50");

    else if(a<=69 && a>=65)
    printf("Grade:B+,3.25");

    else if(a<=64&& a>=60)
    printf("Grade:B,GPA:3.00");

    else if(a<=59 && a>=55)
    printf("Grade:B-,GPA:2.75");

    else if(a<=54 && a>=50)
    printf("Grade:C+,GPA:2.50");

    else if(a<=49 && a>=45)
    printf("Grade:C,2.25");

    else if(a<=44 && a>=40)
    printf("Grade:D,GPA:2.00");

    else  printf("Fail");
}


    else printf("Wrong input");


return 0;
}
