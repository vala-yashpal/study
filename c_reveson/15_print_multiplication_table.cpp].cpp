// 15) print multiplication table inpute number 

#include<stdio.h>

int main()
{
    int a,num;
    
    printf("enter a number :");
    scanf("%d",&num);
    
    for(a=1; a<=10;a++){
    	printf("%d x %d = %d \n",num,a,num*a);
	}
}
