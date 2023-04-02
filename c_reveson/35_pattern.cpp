// 35) pattern 

#include <stdio.h>

int main(){
	
    	int r,c,s;
    	
    	for(r=1 ; r<=4 ; r++){
    		
    		for(s=r ; s<4 ; s++){
    			printf(" ");
    		}
    			for(c=1;c<=r*2-1;c++){
    			
    				if(c%2 == 0){
    					printf("0");
					}else{
						printf("1");
					}
				}
				printf("\n");
			}		
}
