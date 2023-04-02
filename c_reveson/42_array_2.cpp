//42) 
/*ask index num. of array  and new valu for  modification.
replace that inputed value to inputed index no
*/
#include<stdio.h>

int main()
{	int i,a[5],b,c;
	
	for(i=0;i<5;i++)
	 {
	  printf("enter value:");
	  scanf("%d",&a[i]);
	 }

	for(i=0;i<5;i++)
	 {
	  printf("a[%d]=%d\n",i,a[i]);
	 }
	printf("enter element num:");
	scanf("%d",&b);
	printf("enter new value:");
	scanf("%d",&c);

	a[b-1]=c;
	for(i=0;i<5;i++)
	{
	  printf("a[%d]=%d\n",i,a[i]);
    }

  }
