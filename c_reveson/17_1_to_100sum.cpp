//17) sum 1 to 100 

#include<stdio.h>

int main()
{
    int a,sum = 0;
     
    for(a=1; a<=100;a++){
    	if(a != 1){
    		printf("+%d",a);
		}else{
			if(a == 100){
				printf("%d =",a);
			}else{
				printf("%d",a);
			}
			
		}
		sum = sum+a;
	}
	printf("\n");
	printf("total sum 1 to 100 is : = %d \n",sum);
}
