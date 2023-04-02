// 9) check inpute number  sunday to saturday
#include <stdio.h>

int main()
{
    int number;
    
    printf("enter number:");
    scanf("%d",&number);
    
    if (number  == 1){
    	printf("today is monday :%d,",number);
	}else{
		if (number  == 2){
    		printf("today is tuesday :%d,",number);
		}else{
			if (number  == 3){
    			printf("today is wednesday :%d,",number);
			}else{
				if (number  == 4){
    				printf("today is thrisday :%d,",number);
				}else{
					if (number  == 5){
    					printf("today is friday :%d,",number);
					}else{
						if (number  == 6){
    						printf("today is saturday :%d,",number);
						}else{
							if(number == 7){
								printf("today is sunday :%d,",number);
							}else{
								printf("plse enter num in 1 to 7");
							}
						}
					}
				}
			}
		}	
	}
    return 0;
}
