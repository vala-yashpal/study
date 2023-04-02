// 25) find whether  inpute no is prime or note prime 

#include <stdio.h>
int main() {
	
    	int num,a,b,flag;
    	
    	for(num = 1; num <=100;num++){
    		
    		flag = 0;
    		for(a=2;a<=num/2;a++){
    		
				if(num %a == 0){
    				flag = 1;
    				break;	
				}
				if(flag == 0){
				("%d \t",num);
			}
			}
			
				
		}
		printf("this num is all prime number");
	}
