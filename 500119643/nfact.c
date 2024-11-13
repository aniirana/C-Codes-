#include<stdio.h>
int factorial(int x)
{
	int fact = 1;
for(int i=1;i<=x;i++)
{
		fact=fact*i;
}
return fact;
}
int main()
{ 
	int  nfact;
	int  n;
	printf("Enter the number whose n factorial you want");
	scanf("%d",&n);
		nfact=factorial(n);
printf("Your factorial is %d", nfact);
}
