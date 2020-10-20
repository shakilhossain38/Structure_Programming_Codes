#include <stdio.h>

int main()
{
int a,b,c;

scanf("%d%d%d", &a,&b, &c);



if(a==b && b==c)
   printf("They are same");



 else if(c==a )
printf("%d and %d is same", a,c);


else if(b==c )
printf("%d and %d is same", b,c);


else if(a==b )
printf("%d and %d is same",a, b);


else
{
    if(a>b && a>c)
printf("Max of %d ,%d and %d  is :%d", a,b,c,a);

else if(b>c)
printf("Max of %d ,%d and %d is :%d",a, b,c,b);

else printf("Max of %d ,%d and %d is :%d ", a,b,c,c);
}


return 0;



}
