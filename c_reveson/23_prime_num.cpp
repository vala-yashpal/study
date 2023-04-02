// 23) find whether  inpute no is prime or note prime 

#include <stdio.h>
int main() {
	
    	int n,a,b;
    
   		printf("enter a number:");
    	scanf("%d",&n);
    	
    	printf("enter number is :%d \n",n);
    	
    	b = n/2;
    	
    	printf(" number divied by %d/2=%d\n",n,b);
    	
    	
    	for(a=2;a<=b;a++){
    		
    		printf("number A(%d) = %d  \n",a,a);
			    		
    		if(n %a == 0){
    			break;	
			}
		}
		
		if(a = b+1){
			printf("this number is prime number ");
		}else{
			printf("this num is not prime number ");
		}
	}
