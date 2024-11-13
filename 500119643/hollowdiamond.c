#include<stdio.h>
int main()
{
    int n;
    printf("Enter the lines\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
     for(int j=1;j<=2*n-1;j++)
     {
        if(i+j==6)
        {
        printf("*");
        }
        else
        printf(" ");
     }
     printf("\n");

     }   
    }
