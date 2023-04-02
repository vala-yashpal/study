// 10) inpute marks roll no pass ya fail
#include <stdio.h>
int main()
{
    int rn,en,mt,sc,tot,pr;
    
    printf("enter a rool no:");
    scanf("%d",&rn);
    printf("enter a  english marks:");
    scanf("%d",&en);
    printf("enter a maths marks:");
    scanf("%d",&mt);
    printf("enter a science marks:");
    scanf("%d",&sc);
    
    tot = en+mt+sc;
    printf("total marks is : = %d \n",tot);
    
    pr = (tot*100)/300;
    printf("percentage is : = %d \n",pr);
    
    if(en >= 50 && mt >= 50 && sc >= 50){
    	printf("%d, roll no is pass",rn);
	}else{
		printf("%d, roll no is fail",rn);
	}
}
