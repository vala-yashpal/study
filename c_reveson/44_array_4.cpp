//44) 
/*ask index num. of array  and new valu for  modification
 replace that inputed value to inputed index no*/

#include<stdio.h>
int main()
{	
	int i,a[5],b,c;
	
	for(i=0;i<5;i++)
	 {
	  printf("enter valu:");
	  scanf("%d",&a[i]);
	 }

	for(i=0;i<5;i++)
	{
	  printf("a[%d]=%d\n",i,a[i]);
	}
	printf("enter old valu:");
	scanf("%d",&b);
	printf("enter new valu:");
	scanf("%d",&c);


	for(i=0;i<5;i++)
	{
	if(a[i]==b)
	{
	 a[i]=c;
	}
	 printf("a[%d]=%d\n",i,a[i]);
	}
}
