#include <stdio.h>
int main()
{
    int d,m,y,a,b,c,f;

    scanf("%d%d%d", &d,&m,&y);

    if(m==4 || m==6 || m==9 || m==11)
    {
        if(d==30)
        {
            a=1;
            f=2;
            b=m+1;
            printf("The day following %d:%d:%d is %d:%d:%d\n", d,m,y,a,b,y);
            printf("The two day following %d:%d:%d is %d:%d:%d", d,m,y,f,b,y);
        }

        else if(d==29)
        {
            a=d+1;
            f=1;
            b=m+1;
            printf("The day following %d:%d:%d is %d:%d:%d\n", d,m,y,a,b,y);
            printf("The two day following %d:%d:%d is %d:%d:%d", d,m,y,f,b,y);
        }

        else
        {
            a=d+1;
            f=d+2;
            printf("The day following %d:%d:%d is %d:%d:%d\n",d,m,y,a,m,y);
            printf("The two day following %d:%d:%d is %d:%d:%d", d,m,y,f,m,y);
        }
    }


    else if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10)
    {
        if(d==31)
        {
            a=1;
            f=2;
            b=m+1;
            printf("The day following %d:%d:%d is %d:%d:%d\n", d,m,y,a,b,y);
            printf("The two day following %d:%d:%d is %d:%d:%d", d,m,y,f,b,y);
        }

         else if(d==30)
        {
            a=d+1;
            f=1;
            b=m+1;
            printf("The day following %d:%d:%d is %d:%d:%d\n", d,m,y,a,b,y);
            printf("The two day following %d:%d:%d is %d:%d:%d", d,m,y,f,b,y);
        }


        else
        {
           a=d+1;
           f=d+2;
           printf("The day following %d:%d:%d is %d:%d:%d\n",d,m,y,a,m,y);
           printf("The day following %d:%d:%d is %d:%d:%d", d,m,y,f,m,y);
        }
    }


    else if (m==12)
    {
        if(d==31)
        {
            a=1;
            f=2;
            b=1;
            c=y+1;
            printf("The day following %d:%d:%d is %d:%d:%d\n", d,m,y,a,b,c);
            printf("The two day following %d:%d:%d is %d:%d:%d",d,m,y,f,b,c);
        }

        if(d==30)
        {
            a=d+1;
            f=1;
            b=1;
            c=y+1;
            printf("The day following %d:%d:%d is %d:%d:%d\n", d,m,y,a,b,c);
            printf("The two day following %d:%d:%d is %d:%d:%d",d,m,y,f,b,y);
        }

        else
        {
            a=d+1;
            f=d+2;
            printf("The day following %d:%d:%d is %d:%d:%d\n",d,m,y,a,m,y);
            printf("The two day following %d:%d:%d is %d:%d:%d", d,m,y,f,m,y);
        }
    }


    else
    {
        if(y%4==0)
        {
            if(d==29)
            {
                a=1;
                f=2;
                b=m+1;
                printf("The day following %d:%d:%d is %d:%d:%d\n",d,m,y,a,b,y);
                printf("The two day following %d:%d:%d is %d:%d:%d", d,m,y,f,b,y);
            }

             else if(d==28)
        {
            a=d+1;
            f=1;
            b=m+1;
            printf("The day following %d:%d:%d is %d:%d:%d\n", d,m,y,a,b,y);
            printf("The two day following %d:%d:%d is %d:%d:%d", d,m,y,f,b,y);
        }

            else
            {
                a=d+1;
                f=d+2;
                printf("The day following %d:%d:%d is %d:%d:%d\n",d,m,y,a,m,y);
                printf("The two day following %d:%d:%d is %d:%d:%d", d,m,y,f,m,y);
            }
        }

        else
        {
            if(d==28)
            {
                a=1;
                f=2;
                b=m+1;
                printf("The day following %d:%d:%d is %d:%d:%d\n",d,m,y,a,b,y);
                printf("The two day following %d:%d:%d is %d:%d:%d",d,m,y,f,b,y);
            }

        if(d==27)
            {
                a=d+1;;
                f=1;
                b=m+1;
                printf("The day following %d:%d:%d is %d:%d:%d\n",d,m,y,a,b,y);
                printf("The two day following %d:%d:%d is %d:%d:%d",d,m,y,f,b,y);
            }

            else
            {
                a=d+1;
                f=d+2;
                printf("The day following %d:%d:%d is %d:%d:%d\n", d,m,y,a,m,y);
                printf("The two day following %d:%d:%d is %d:%d:%d", d,m,y,f,m,y);
            }
        }
    }




return 0;
}
