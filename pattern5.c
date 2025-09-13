#include<stdio.h>
int main()
{
    int n,nst;
    printf("Enter a number");
    scanf("%d",&n);
    nst = (n*2)-1;
    int space = 0;
    for (int i = 1 ; i<= n; i ++)
    {  
       for  (int j = 1; j <= space; j++)
        {
            printf("   ");
            }
        for (int k = 1 ; k <= nst ;k++)
        {
            printf(" * ");
        }
    
        printf("\n");
        nst = nst - 2;
        space++;
    }
    return 0;
}