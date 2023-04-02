//5) if conditional stetment

#include <stdio.h>

int main()
{
    int a,b;
    
    printf("enter value of A:");
    scanf("%d",&a);
    printf("enter value of B:");
    scanf("%d",&b);
    
    if(a>b){
    	printf("a is highest");
	}else{
		if(a==b){
			printf("a and b both are same");
		}
		else{	
			printf("b is highest");
		}
	}
}
