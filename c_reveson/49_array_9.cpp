//49)  2d array sum row

#include<stdio.h>
int main()
{	
	int mat[3][3],c,r,x,c1=0,c2=0,c3=0;

    for(r=0;r<3;r++)
    {
      	for(c=0;c<3;c++)
      	{
      		printf("enter value:");
       		scanf("%d",&mat[r][c]);
      	}
    }

    for(r=0;r<3;r++)
     	{
     		x=0;
      		for(c=0;c<3;c++)
      		{
      			x=x+mat[r][c];
      			if(c==0)
				c1=c1+mat[r][c];
      			if(c==1)
				c2=c2+mat[r][c];
      			if(c==2)
				c3=c3+mat[r][c];
       			printf("%d\t",mat[r][c]);
      		}

      		printf("%d",x);
      		printf("\n");
     	}
    printf("%d\t%d\t%d\t",c1,c2,c3);
}
