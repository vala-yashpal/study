// 7) check inpute year is leap year or not
#include <stdio.h>

int main()
{
    int year;
    
    printf("enter year:");
    scanf("%d",&year);
    
    if (year % 4 == 0){
    	printf("%d, is leap year",year);
	}else{
		printf("%d, is note leap year",year);
	}
    return 0;
}
