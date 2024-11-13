#include<stdio.h>
int search(char *par,int v ,int j)
{
	int i=0;
 	while(i<5){
		if(*par==j){
			break;
		}
		else
			i++,par++;
	}
return i; 
}


int main(){
	int k;
	char arr[]={0,2,1,3,4};
	char *par;
	par = &arr[0];
	k=search(&arr[0],5,1);
 	printf("%d",k);
}
