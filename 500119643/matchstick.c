#include<stdio.h>
int main()
{
int matchsticks = 21;
printf("Total no of matchsticks %d", matchsticks);
while(1)
{
int u; 
printf(" No picked by user is %d",u);
int c=5-u;
printf(" No picked by computer is%d",c);

}
if(matchsticks==1)
printf("user wins");
else
printf("computer wins");
break;
}  
