#include<stdio.h>
int main ()
{
    int n,i,j,k,nst,nsp;
    printf("Enter the number:");
    scanf("%d",&n);
    nsp = n/2;
    nst = 1;
    for ( i = 1; i<= n ; i++){
        for ( j = 1; j <= nst ; j++ )
        {
            printf("  ");
        }
        for ( k = 1; k <= nsp; k++)
        {
            printf(" * ");
        }
        printf("\n");
    if ( i <= n/2)
    {
        nst +=2 ;
        nsp --;
    }
    else
    {
        nst -=2 ;
        nsp ++;
    }
    }
    return 0;
}