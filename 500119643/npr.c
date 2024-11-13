#include<stdio.h>
int factorial(int x)
 {
	int i;	int fact=1;
	for(i=2;i<=x;i++)
	{ 
	 fact=fact*i;
	}
	  return fact;
		}
int compi(int n,int nr)
	{
	 int npr=factorial(n)/factorial(nr);
	return npr;
	}
int main()
 {
	int n,p;
	int nr;
	int npr;
		printf("Enter 1st no");
			scanf ("%d",&n);
		printf("Enter 2nd no");
			scanf("%d",&nr);
	
	npr=compi(n,nr);
		printf("npr of entered numbers is %d",npr);
	return 0;
}
	
	
