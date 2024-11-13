#include<stdio.h>
int main()
{
int n=016;
int digit=0;
int s=0;

while(n>0)
{
	digit=n%10;
	n=n/10;
	s=s+digit;
}
printf("%d",s);
}
