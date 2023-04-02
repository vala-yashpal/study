//3) inpute value 
//	find out net salse amout = 
//		total salse + freight + paking cost - discount 
//		where totale salse = price per unite * quantity 
//		where price per unite is 100rs and quantity is so pcs,
//		where freight is 15 % of total salse,
//		pacing cost is 25rs per pic,
//		discount is 1/5 of total salse;


#include <stdio.h>

int main()
{
    int prpu,q,ts,f,pc,ds,nsa;
    
    printf("enter amount price per unite:");
    scanf("%d",&prpu);
    
    printf("enter quantity :");
    scanf("%d",&q);
    
   
    ts = prpu*q;
    f = (ts*.15);
    pc = q*25;
    ds = ts/5;
    nsa = (ts + f + pc ) - ds;
    
    printf("price pre unite is = %d\n",prpu);
    printf("quantity is = %d\n",q);
    printf("total salse  is = %d\n",ts);
    printf("total freight is = %d\n",f);
    printf("total packing cost is = %d\n",pc);
    printf("total discount is = %d\n",ds);
    printf("net salse amount is = %d\n",nsa);
    
}
