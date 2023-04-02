// 31) pattern 

#include <stdio.h>

int main(){
	
    	int r,c,s;
    	
    	for(r=1 ; r<=5 ; r++){
    		
    		for(s=1 ; s<r ; s++){
    			printf(" ");
			}
    		for(c=1;c<=6-r;c++){
    			printf("%d",c);
			}
			printf("\n");
		}	
}
