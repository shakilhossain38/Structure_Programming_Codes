#include<stdio.h>
int main()
{
    int i=2,n,sum=0;
    scanf("%d", &n);

    while(i<=n)
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
        i=i+3;
    }

    printf("=%d", sum);
}
