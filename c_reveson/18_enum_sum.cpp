 //18) sum user enter number 
 
#include <stdio.h>
 
int main()
{
    int num ,a,sum=0;
    
    printf("enter number:");
    scanf("%d",&num);

	for( ; num > 0 ;)
    {
	    a = num%10;
	    num = num /10;
	    sum =sum+a;
	}
 	printf("enter num sum is :%d",sum);
    return 0;
}
