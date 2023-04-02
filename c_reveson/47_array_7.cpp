//47)  2d array search value

#include<stdio.h>
int main()
{	
	int mat[3][3],r,c,b,flag;
  

  	for(r=0;r<3;r++)
   	{
    	 for(c=0;c<3;c++)
     	{
     		 printf("enter valu:");
     		 scanf("%d",&mat[r][c]);
     	}
   	}

    for(r=0;r<3;r++)
    {
      	for(c=0;c<3;c++)
      	{
      		printf("%d\t",mat[r][c]);
      	}
	 	printf("\n");
    }
      printf("enter valu is check in array:");
      scanf("%d",&b);
      flag=0;
    for(r=0;r<3;r++)
   	{
      	for(c=0;c<3;c++)
      	{
			if(mat[r][c]==b)
			{
				flag=1;
				break;
			}
      	}
    }
    if(flag==1)
	{
	  printf(" the valu is  avilabel in arry\n");
	}
	else
	{
	  printf("the valu is not avilabel in array");
	}
}
