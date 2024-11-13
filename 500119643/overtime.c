#include<stdio.h>
int main()
{
float ot;
int hours, i=1;
printf("Hours is\n");
scanf("%d",&hours);
while(i<=10)
{
i++;
ot=(hours-40)*12.00;
}
if(hours>=40)
printf("overtime is %f\n",ot);
else
printf("no overtime");

}
