#include<stdio.h>
int main()
{
int x= 642;
int sum = (x%10);
x=x/10;
sum = sum + (x%10);
x=x/10;
sum=sum+(x%10);
printf("%d",sum);


if(sum%2==1)
printf("number is odd");
if(sum%2==0)
printf("number is even");
}
