// 22) Factorial  num
#include <stdio.h>
int main() {
    int n,a,b=1,base,root;
    
    printf("enter a base value :");
    scanf ("%d",&base);
    
    printf("enter a root value :");
    scanf ("%d",&root);
    
    
    for(a=1;a<=root;a++){
    	
    	b = base*b;
    	if(a == 1){
    		printf("%d",base);
		}else{
			printf(" x %d",base);
		}
	}
	printf("=%d",b);
}
