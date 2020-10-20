#include<stdio.h>
int main()
{
    int i=2,n,sum=0;
    scanf("%d", &n);

    do
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
    while(i<=n);

    printf("=%d", sum);
}
