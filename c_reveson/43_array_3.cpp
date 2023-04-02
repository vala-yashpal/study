//43) array high value search

#include<stdio.h>

int main()
{	

	int i,a[5],b;

	for(i=0;i<5;i++)
	{
	  printf("enter value:");
	  scanf("%d",&a[i]);
	}
	
	b=0;
	for(i=0;i<5;i++)
    {
		if(b<a[i])
		{
			b=a[i];
		}
    }
       printf("high value in array is %d",b);
  
}
