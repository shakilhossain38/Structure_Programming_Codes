#include <stdio.h>

int main()
{
int a,b,c;

scanf("%d%d%d", &a,&b, &c);



if(a==b && b==c)
   printf("They are same");




else if(a<b && a<c)
{
if(b<c)
printf("%d %d %d", a,b,c);
else
printf("%d %d %d",a,c,b);
}

else if (b<c)
{
if(c<a)
printf("%d %d %d",b,c,a);

else
printf("%d %d %d",b,a,c);

}

else
{
if(b<a)
printf("%d %d %d", c,b,a);

else printf("%d %d %d",c,a,b);
}




return 0;



}
