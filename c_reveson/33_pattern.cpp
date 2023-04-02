// 33) pattern 

#include <stdio.h>

int main(){
	
    	int r,c,x=0;
    	
    	for(r=1 ; r<=5 ; r++){
    		
    		for(c=1;c<=r;c++){
    			
    			if(x == 0){
    				printf("1 ");
    				x = 1;
				}else{
					printf("0 ");
					x = 0;
				}
			}
			printf("\n");
		}	
}
