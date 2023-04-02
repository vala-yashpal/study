//50)  2d array matrix multiplication

#include<stdio.h>
int main()
{	
	int mat1[3][3],mat2[3][3],mat3[3][3],r,c,k,sum;
 
  	for(r=0;r<3;r++)
  	{
   		for(c=0;c<3;c++)
   		{
    		printf("enter valu:");
    		scanf("%d",&mat1[r][c]);
   		}
  	}
  	
  	for(r=0;r<3;r++)
  	{
   		for(c=0;c<3;c++)
   		{
    		printf("%d\t",mat1[r][c]);
   		}
   		printf("\n");
  	}
  	
  	for(r=0;r<3;r++)
  	{
   		for(c=0;c<3;c++)
   		{
   			printf("enter valu:");
    		scanf("%d",&mat2[r][c]);
   		}
  	}
  	
  	for(r=0;r<3;r++)
  	{
   		for(c=0;c<3;c++)
   		{
    		printf("%d\t",mat2[r][c]);
   		}
   		printf("\n");
  	}
  	printf("\n");
  
  	for(r=0;r<3;r++)
  	{
   		for(c=0;c<3;c++)
   		{
    		sum=0;
    		for(k=0;k<3;k++)
    		{
     			sum=sum+(mat1[r][k]*mat2[k][c]);
    		}
    		mat3[r][c]=sum;
   		}
  	}
  	
  	for(r=0;r<3;r++)
  	{
   		for(c=0;c<3;c++)
   		{
    		printf("%d\t",mat3[r][c]);
   		}
   		printf("\n");
  	}
}
