#include<stdio.h>
int main ()
{
    int n,i,j,k,nst,nsp;
    printf("Enter a number:");
    scanf("%d",&n);
    nsp = (n * 2)- 3;
    nst =  1;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <=nst; j ++)
        {
            printf(" * ");
        }
        for ( k = 1; k <= nsp; k++)
        {
            printf("   ");
        }
        for ( j = 1; j <= nst; j++)
        {
            printf(" * ");
        }
        printf("\n");
        nst = nst + 1;
       nsp = nsp - 2;
    }

    return 0;
}