//13) start and end loop number
#include<stdio.h>

int main()
{
    int sln,eln,a;
    
    printf("enter a start loop number");
    scanf("%d",&sln);
    
    printf("enter a end loop number");
    scanf("%d",&eln);
    
    for(a=sln;a <= eln; a++){
    	printf("\t %d",a);
	}
}
