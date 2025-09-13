#include<stdio.h>
int main ()
{ 
    int nst,n;
    printf("Enter a number:");
    scanf("%d",&n);
    nst = n;
    for (int i = 1 ; i <= n;i++)     //for rows
    {    
        for ( int j = 1; j <= nst ; j++)      //for columns
         {     
          printf(" * ");
        }
        printf("\n");
        nst--;
     }
    return 0;
}