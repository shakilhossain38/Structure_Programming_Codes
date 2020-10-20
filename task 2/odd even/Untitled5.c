#include <stdio.h>
int main()

{

int a;
printf("Enter an integer number\n");
scanf("%d", &a);
if(a==0)
printf("The number is zero");

else if(a%2==0)
printf("The number is even");

else{printf("The number is odd");}
return 0;
}
