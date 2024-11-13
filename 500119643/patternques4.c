#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of lines");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int k=i;
        for(int j=n;j>n-i;j--)
        {
        
            printf("%d",k);
            k--;

        }
        printf("\n");
    }
}