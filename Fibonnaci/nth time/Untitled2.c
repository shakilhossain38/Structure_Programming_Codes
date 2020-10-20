#include <stdio.h>
int main()
{
    int i,n,t1=0,t2=1,nextTerm,sum=1;

    scanf("%d", &n);

    nextTerm=t1+t2;

    printf("%d\n%d\n", t1,t2);

    for(i=1;i<n-1;i++)

    {
        printf("%d\n", nextTerm);
        sum=sum+nextTerm;
        t1=t2;
        t2=nextTerm;
        nextTerm=t1+t2;
    }
    printf("%d", sum);

    return 0;
}
