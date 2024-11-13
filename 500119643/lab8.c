#include<stdio.h>
int arr[3][3];
void printvalues()
{
for(int i=0;i<3;i++)
	{
	for(int j=0;j<3;j++)
		{
		printf("%d ",arr[i][j]);
		}
         printf("\n");
	}
}

void entervalues()
{
for(int i=0;i<3;i++)
	{
	for(int j=0;j<3;j++)
		{
		scanf("%d\n",&arr[i][j]);
		}
	}
}

int countvalue(int no)
{
int count=0;
for(int i=0;i<3;i++)
	{
	for(int j=0;j<3;j++)
		{
		if(arr[i][j] == no)
		count=count+2;
		}
	}
return count;
}
int main()
{
int no,counting,values,a;
	printf("Enter your choice\n");
	scanf("%d",&a);
	{
		switch (a)
			{

			case 1:
			printf("Enter values in array\n");
			entervalues();
			break;
			case 2:
			printf("Enter values in array\n");
			entervalues();
			printvalues();
			break;
			case 3:
			printf("Enter the values in array\n");
			entervalues();
			printf("ENTER A NUMBER\n");
			scanf("%d\n",&no);
			counting=countvalue(no);
			printf("Your count is %d\n ",counting);
			break;
			default :
			printf("You provided wrong choice");
			break;
			}
	}
return 0;
}
