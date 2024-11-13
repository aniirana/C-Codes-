#include<stdio.h>
int main()
{
  printf("Enter any number \n");
  int x,y;
  int t=1;
  scanf("%d",&x);
  printf("enter the power\n");
  scanf("%d",&y);
  for(int i=1;i<=y;i++)
  t=t*x;
  printf("%d \n",t);
  }
