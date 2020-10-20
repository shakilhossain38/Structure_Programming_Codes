#include <stdio.h>
int main()
{
    int T,s,x,y,n,i,Next,sum;
    scanf("%d", &T);
    for(s=1;s<=T;s++)
    {
    scanf("%d%d%d", &x,&y,&n);

    Next=x+y;

    sum=Next;

    for(i=1;i<n-1;i++)
    {

        sum=sum+Next;
        x=y;
        y=Next;
        Next=x+y;
    }
    printf("Case %d: %d\n",s, sum);
}


    return 0;
}
