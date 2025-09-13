#include<stdio.h>
int main ()
{
    for (int i = 1 ; i <= 5;i++)     //for rows
    {    
        for ( int j = 1; j <= 4 ; j++)      //for columns
         {     
          printf(" * ");
        }
        printf("\n");
     }
    return 0;
}