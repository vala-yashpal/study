//16) pattern 

#include<stdio.h>

int main()
{
    int a;
     
    for(a=1; a<=100;a++){
    	if(a%4 == 0){
    		printf("%d\n",a);
		}else{
			printf("%d\t",a);
		}
    	
	}
}
