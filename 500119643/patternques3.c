#include<stdio.h>
int main()
{
    int n;
    int a=1;
    printf("enter the number of lines\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",a);
            a++;
        }
        printf("\n");
    
    }
}