#include<stdio.h>
int main ()
{
    int n,i,j;
    printf("Enter a number:");
    scanf("%d",&n);
    for ( i = 1; i<= n; i++)
    {
        for (j = 1; j<= n; j++)
        {
        if ( i == n || j == n || i+j == 6)
         printf(" * ");
        else
         printf("   ");
        }
        printf("\n");
    }
    return 0;
}