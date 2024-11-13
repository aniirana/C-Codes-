#include<stdio.h>
int main()
{
int num = 157;
int digit,sum=0;
while(num>0)
{
digit = num%10;
num = num/10;
sum = sum+digit;
}
printf("sum of digit %d is %d",num,sum);
}
