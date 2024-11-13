#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int num = 0,rem,l;
   
	l=n;
   
   while(n!=0)
   {
      rem = n%10;
      num = num + rem*rem*rem;
      n=n/10;
   }
   
   if( num == l)
   {
      printf("Number is an armstrong\n");
   }
   
   else
   {
      printf("not an armstrong number\n");
   }
            
   
}
