//24) fibbonaci siries
#include <stdio.h>
int main()
{
   int a,b,c,f;
   a=0;
   b=1;
   
	printf("%d\n",a);
	printf("%d\n",b);
	
	for(f=1;f<=12;f++){
		c = a+b;
		printf("%d\n",c);
		a=b;
		b=c;
	}
	
}
