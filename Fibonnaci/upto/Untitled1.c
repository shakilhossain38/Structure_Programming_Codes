#include <stdio.h>
int main()
{
    int i,n,t1=0,t2=1,nextTerm;

    scanf("%d", &n);

    nextTerm=t1+t2;

    printf("%d\n%d\n", t1,t2);

    for(i=1;nextTerm<=n;i++)

    {
        printf("%d\n", nextTerm);
        t1=t2;
        t2=nextTerm;
        nextTerm=t1+t2;
    }

    return 0;
}
