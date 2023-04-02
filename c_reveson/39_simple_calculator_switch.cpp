// 39) switch case calculator

#include <stdio.h>

int main(){
	
    int fn,ln,c=1,ans=0;
    
    printf(" enter firs number:");
    scanf("%d",&fn);
    
    printf(" enter last number:");
    scanf("%d",&ln);
    
	while(c <=4){
		
		printf("\n 1 :addition \n");
		printf(" 2 :subtraction \n");
		printf(" 3 :multiplicatioin \n");
		printf(" 4 :division \n");
		printf(" 5 :exit \n");
		
		printf("enter  your choich : ");
		scanf("%d",&c);
		
		switch(c)
		{
		
  		case 1:
    		ans = fn+ln;
    		printf("\naddition is :%d \n",ans);
    	break;
    	
    	case 2:
    		ans = fn-ln;
    		printf("subtraction is :%d \n",ans);
    	break;
    	
    	case 3:
    		ans = fn*ln;
    		printf("multiplicatioin is :%d \n",ans);
    	break;
    	
    	case 4:
    		ans = fn/ln;
    		printf("division is :%d \n",ans);
    	break;
    	
    	default:
    		printf("tata by by...");
    	break;
    	
		}
  
	}	
    	
}
