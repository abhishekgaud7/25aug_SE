#include<stdio.h>
main()
{
	int i;
	for(i=1;i<=10;i++){
		if(i==5){
//			break; // it will break your statement when i==5
			continue;
		}else{
			printf("\n%d",i);
		}
	}
}
