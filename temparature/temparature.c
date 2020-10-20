#include <stdio.h>
int main()
{
    float f,c;

    printf("Enter the temparature in Celsius\n");
    scanf("%f", &c);

    f=(9*c+160)/5;

    printf("\nThe temparature in Fahreheit is %0.3f", f);

    return 0;

}
