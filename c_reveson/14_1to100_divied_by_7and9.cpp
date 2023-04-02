//14) print the number bettween 1 to 1000 divide by 7 and 9

#include<stdio.h>

int main()
{
    int a;
    
    printf("1 to 1000 divied by 7 \n");
    for(a=1;a <= 100; a++){
    	if(a %7 == 0){
    	printf("%d \n",a);
		}
	}
	
	printf("1 to 1000 divied by 9 \n");
    for(a=1;a <= 100; a++){
    	if(a %9 == 0){
    	printf("%d \n",a);
		}
	}
    
}
