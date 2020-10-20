#include <stdio.h>
int main()
{
    int i,m,s,nextTerm,t3,t4,t5,sum;
    scanf("%d", &m);
    for(s=1;s<=m;s++)
    {
        scanf("%d%d%d", &t3,&t4,&t5);

        nextTerm=t3+t4;

        printf("%d\n%d\n", t3,t4);
        sum=nextTerm;

    for(i=1;i<t5-1;i++)

    {
        printf("%d\n", nextTerm);

        sum=sum+nextTerm;
        t3=t4;
        t4=nextTerm;
        nextTerm=t3+t4;
    }
    printf("Case %d: %d\n",s, sum);
}


    return 0;
}
