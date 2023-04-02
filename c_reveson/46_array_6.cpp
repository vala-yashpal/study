//46)  2d array

#include<stdio.h>
int main()
{	
	int mat[3][3],r,c;
  

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
}
