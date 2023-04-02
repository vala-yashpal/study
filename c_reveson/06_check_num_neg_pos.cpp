//06) check whether inputed number is negative,positive or zero;

#include <stdio.h>

int main()
{
    int num;
    
	printf("enter value of number:");
    scanf("%d",&num);
    
    if(num > 0){
    	printf("enter number is positive");
	}else{
		if(num < 0){
			printf("enter number is negetive ");
		}
		else{	
			printf("enter number is zero");
		}
	}

    return 0;
}
