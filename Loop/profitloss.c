#include<stdio.h>
main()
{
   float sp,cp,profit,loss;
   printf("Enter the sp:");
   scanf("%f",&sp);
   printf("Enter the cp:");
   scanf("%f",&cp);
   if(sp > cp){
   
    profit=sp - cp;
    printf("profit  = %.2f",profit);
   
   }else if(cp > sp){
   	loss=cp- sp;
   	printf("loss =  %.2f",loss);
	 }else{
	 	printf("There are no loss and profit");
	 }
}
