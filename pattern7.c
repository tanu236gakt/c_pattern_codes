#include<stdio.h>
int main ()
{
    int n,i,j,k,nst,spc;
    printf("Enter a number:");
    scanf("%d",&n);
    nst = n;
    spc = 0;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <=spc; j ++)
        {
            printf("   ");
        }
        for ( k = 1; k <= nst;  k++)
        {
            printf(" * ");
        }
        printf("\n");
        nst --;
       spc ++;
    }

    return 0;
}