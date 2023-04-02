// 41) array inpute array of 5 valu  then ask valu to find in array of value u inputed
 //exist in array print it's exist otherwise print it's doesn'exist.

#include<stdio.h>

int main()
{	
	int i,a[5],b,flag;

	for(i=0;i<5;i++)
	 {
	  printf("enter value:");
	  scanf("%d",&a[i]);
	}
	printf("enter value is check in arry:");
	scanf("%d",&b);

	flag=0;
	for(i=0;i<5;i++)

	{
	 if(a[i]==b)
	 {
	 flag=1;
	  break;
	 }
       }
       if(flag==1)
	{
	 printf(" the valu is  avilabel in arry\n");
	}else
	{
	 printf("the valu is not avilabel in array");
	}
}
