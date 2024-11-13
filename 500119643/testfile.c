#include<stdio.h>
int main()
{
    int x[4];
    int i;
    for(i=0;i<=3;i++)
    {
        printf("&x[%d]=%p\n",i,&x[i]);

    }
}