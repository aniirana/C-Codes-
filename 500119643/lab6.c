#include<stdio.h>
int main()
{
    int a,i,j,k,m,l, rows=5;


    m = rows-1;
        for (i = 1; i <= rows ; i++)   {
    a=i-1;
 	for(j = 1; j <= m ; j++)   {
            printf(" "); 
}
   m--;
	for(l=1;l<=i;l++)
{
	    printf("%d",l);
}
        for (int k = 1; k <= i-1 ; k++)   {
            printf("%d",a); 
   a--;
}
            printf("\n");
}
    return 0;
}
