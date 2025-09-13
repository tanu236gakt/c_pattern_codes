#include<stdio.h>
int main ()
{
    int n,i,k,j,nst,nsp;
    printf("Enter the number:");
    scanf("%d",&n);
    nsp = n-2;
    nst = 1;
    for ( i = 1; i<= n ; i++){
        for ( j = 1; j <= nst ; j++ )
        {
            printf(" * ");
        }
        for ( k = 1; k <= nsp; k++)
        {
            printf("   ");
        }
        if ( i == (n/2)+1)
        nst--;
        for ( j = 1; j <= nst ; j++ )
        {
            printf(" * ");
        }
        if ( i == (n/2)+1)
        nst++;
        printf("\n");
    if ( i <= n/2)
    {
        nst++;
        nsp-=2;
    }
    else
    {
        nst--;
        nsp+=2;
    }
    }
    return 0;
}