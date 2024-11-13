#include<stdio.h>
int main()
{
int arr[25];
printf("Enter values of your array");
for(int i=0;i<25;i++)
	{
	scanf("%d\n",&arr[i]);
	}
int num;
printf("Enter a number you want to search");
scanf("%d",&num);
int count=0;
for(int j=0;j<25;j++)
	{
	if(num==arr[j])
	count++;
	else
	continue;
	}
printf("%d",count);
}
	
