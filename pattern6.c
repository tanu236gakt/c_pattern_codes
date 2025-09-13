#include<stdio.h>
int main ()
{
    int n,i,j,nst,spc;
    printf("Enter a number:");
    scanf("%d",&n);
    nst = 1;
    spc = n-1;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= spc;  j ++)
        {
            printf("   ");
        }
        for ( j = 1; j <= nst;  j++) //we can use j here as j in the loop before ends
        {
            printf(" * ");
        }
        printf("\n");
        nst ++;
       spc --;
    }

    return 0;
}