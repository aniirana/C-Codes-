//pascal triangle
#include<stdio.h>
int factorial(int x)
{
int fact=1;
	for(int i=1;i<=x;i++)
{ 		fact=fact*i;
}
return fact;
}
int combination(int a,int j)
{
	int combination = factorial(a)/(factorial(j)*factorial(a-j));
 return combination;
}
int main()
{ 
		int n;
	printf("Enter number of lines");
		scanf("%d",&n);
	for(int a=0;a<=n;a++)
	{
	for(int j=0;j<=a;j++)
	{ 		int acj =combination(a,j);
	printf("%d ",acj);
	}
	printf("\n");
}

return 0;
}
