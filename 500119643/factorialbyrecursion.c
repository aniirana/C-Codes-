#include<stdio.h>
int factorial(int n)
{
if(n==1)
return 1;
return n*factorial(n-1);
}
int main()
{
int fact,n;
printf("Enter your number");
scanf("%d",&n);
fact = factorial(n);
printf("%d",fact);
return 0;
}
