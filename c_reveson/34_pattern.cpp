// 34) pattern 

#include <stdio.h>

int main(){
	
    	int r,c,s,x=0;
    	
    	for(r=1 ; r<=5 ; r++){
    		
    		for(s=1 ; s<r ; s++){
    			printf(" ");
			}
			
    		for(c=1;c<=6-r;c++){
    			
    			if(x == 0){
    				printf("1");
    				x = 1;
				}else{
					printf("0");
					x = 0;
				}
			}
			printf("\n");
		}	
}
