#include<stdio.h>
int main()
{
    int i,n,sum=0;
    scanf("%d", &n);

    for(i=2;i<=n;i=i+3)
    {
        if(i==n)
        {
            printf("%d", i);
        }
        else
        {
        printf("%d+",i);
        }
        sum=sum+i;
    }
    printf("=%d", sum);
}
