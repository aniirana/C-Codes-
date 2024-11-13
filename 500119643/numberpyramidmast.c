#include<stdio.h>
int main()
{
int n;
printf("Enter no of lines:");
scanf("%d",&n);
for(int i=1;i<=n;i++)
	{
	int a=i-1;
	for(int k=1;k<=n-i;k++)
		{
		printf(" ");
		}
	for(int j=1;j<=i;j++)
		{
		printf("%d",j);
		}
	for(int q=1;q<=i-1;q++)
		{
		printf("%d",a);
		a--;
		}
	printf("\n");
	}
}
