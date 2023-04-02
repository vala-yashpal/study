//45)  small number in array

#include<stdio.h>
int main()
{	
	int i,a[5],b;
 
  	for(i=0;i<5;i++)
  	{
   		printf("enter valu:");
   		scanf("%d",&a[i]);
  	}
   	b = a[0];
  	for(i=0;i<5;i++)
  	{
  		if(a[i]<b){
    		b = a[i];
  		}
 	}
   printf(" small number is %d",b);
}
