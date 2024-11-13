#include<stdio.h>
void greeting(int a)
{
if(a==0)
return;
printf("good morning\n");
greeting(a-1);
return;
}
int main()
{
int a;
printf("Enter no of times you want\n");
scanf("%d\n",&a);
greeting(a);
return 0;
}
