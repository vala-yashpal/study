// 21) Factorial  num
#include <stdio.h>
int main() {
    int n,a,b=1;
    
    printf("enter a number :");
    scanf ("%d",&n);
    
    for(a=1;a<=n;a++){
    	
    	b = b*a;
    	if(a !=1){
    		printf(" x%d",a);
		}else{
			printf("%d",a);
		}
	}
	printf("=%d",b);
}
