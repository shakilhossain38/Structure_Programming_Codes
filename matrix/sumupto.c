#include <stdio.h>
int main()
{
    int m,n,i,sum=0;
    scanf("%d", &n);
   for(i=10;n>=10;i++)
    {
        m=n%10;
        n=n/10;
        sum=sum+m;
    }
    sum=sum+n;
    printf("%d",sum);
    return 0;
}
