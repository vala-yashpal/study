// 11) print out electricity bill 
#include <stdio.h>
int main()
{
    int cu,a;
    
    printf("enter a consumed unite :");
    scanf("%d",&cu);
    
    if(cu <= 300 && cu >= 0){
    	a = cu*3;
	}
	
	if(cu >300 && cu <= 400){
		a = 300*3 + (cu-300)*4;
	}
	
	if(cu>400 && cu <= 500){
		a=300*3 + 100*4 +(cu-400)*5;
	}
	
	if(cu > 500){
		a = 300*3 + 100*4 + 100*5 + (cu - 500)*6;
	}
	printf("total bill is  %d",a);
}
