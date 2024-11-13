#include<stdio.h>
void sum(int n,int s)
{
if(n==0)
return;
sum(n-1,s+n);
return;
}
int main()
{
int n;
printf("Enter value\n");
scanf("d\n",&n);
sum(n,0);
}
