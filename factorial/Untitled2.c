#include <stdio.h>
int main()
{
    int M,N,T;
    int a;

    scanf("%d", &N);
    for(M=1;M<=N;M++)

{

    scanf("%d", &a);
    if(a==1)
    {
        printf("0\n");
    }
    else if(a==2)
    {
        printf("1\n");
    }

    else
    {

    int multi=1;
    for (T=1;T<=a;T++)
    {

    multi=T*multi;

    }
    printf("%d\n",multi);
    }
}
return 0;

}
