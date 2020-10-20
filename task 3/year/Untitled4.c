#include <stdio.h>
int main()
{
int d,m,y,a,b,c;

scanf("%d%d%d", &d,&m,&y);


if((m==4) || (m==6) ||(m==8) || (m==10))

{

if(d==30)
{
a==1;
b=m+1;

printf("The  Date following %d:%d:%d is %d:%d:%d", d,m,y,a,b,y);
}

else
{
a=d+1;
printf("The Date following %d:%d:%d id %d:%d:%d", d,m,y,a,m,y);
}
}

else if((m==1) || (m==3) ||(m==5) || (m==7) || (m==8) || (m==10))

{

if(d==31)
{
a==1;
b=m+1;

printf("The  Date following %d:%d:%d is %d:%d:%d", d,m,y,a,b,y);
}

else
{
a=d+1;
printf("The Date following %d:%d:%d id %d:%d:%d", d,m,y,a,m,y);
}
}

else if(m==12)
{
    if(d==31)
{
    a=1;
    b=1;
    c=y+1;
    printf("The  Date following %d:%d:%d is %d:%d:%d", d,m,y,a,b,c);

}

else
{
    a=d+1;

    printf("The Date following %d:%d:%d id %d:%d:%d", d,m,y,a,m,y);
}
}



else if(m==2)
{
    if ((y%4==0) || ((y%100==0) && (y%400==0)))
        {
           if (d==29)
            {
                a=1;
                b=m+1;
                 printf("The Date following %d:%d:%d id %d:%d:%d", d,m,y,a,b,y);

            }
            else
            {
                a=d+1;
             printf("The Date following %d:%d:%d id %d:%d:%d", d,m,y,a,m,y);
            }

            }


            else
            {
                if(d==28)
                {
                    a=1;
                    b=m+1;
                         printf("The Date following %d:%d:%d id %d:%d:%d", d,m,y,a,b,y);
                }
                else
                {
                    a=d+1;
                     printf("The Date following %d:%d:%d id %d:%d:%d", d,m,y,a,m,y);
                }
            }
}




return 0;
}



