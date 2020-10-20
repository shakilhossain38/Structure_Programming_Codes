#include <stdio.h>
int main()
{
    int i,j,a[20][20],b[20][20],n,m;
    printf("Enter row number\n");
    scanf("%d",&n);
    printf("Enter column number\n");
    scanf("%d",&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf("\nmat[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
            printf("\nmat[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);

        }
    }
    printf("matrix a is:\n");


    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf("%d\t",a[i][j]);

        }
        printf("\n\n");

    }



    printf("matrix b is:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf("%d\t",b[i][j]);

        }
        printf("\n\n");

    }
    printf("Subtraction of matrix a and b is:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf("%d\t",a[i][j]-b[i][j]);

        }
        printf("\n\n");

    }
}
