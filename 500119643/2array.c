#include<stdio.h>
int main()
{
int n;
int arr[n];
int arr2[n];

printf("Enter no of elements in array");
scanf("%d",&n);

for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
for(int j=0;j<n;j++)
	{
		scanf("%d",&arr2[j]);
	}

for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
