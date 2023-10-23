#include<stdio.h>
#include<string.h>
#include<stdbool.h>
void main(){
	int i=1,num,j;
	char a[20];
	char b[20];
	
	bool s=true;
	while(s){
		printf("\nMain Menu");
		printf("\n\t1.Equality");
		printf("\n\t2.String Copy");
		printf("\n\t3.Concat");
		printf("\n\t4.Show");
		printf("\n\t5.Reverse");
		printf("\n\t6.Palindrome");
		printf("\n\t7.Sub String");
		printf("\n\t8.Exit");
		i++;
		printf("\nEnter your choice:");
		scanf("%d",&j);
		if(j==1)
		{
			printf("\nEnter your First string:");
			scanf("%s",&a);
			
			printf("\nEnter your Second string:");
			scanf("%s",&b);
			
			if(strcmp(a,b)==0)
			{
				printf("String is same...");
			}
			else
			{
				printf("String is not same...");
			}
			
		}
		else if(j==2)
		{
			char c[20];
			char d[20];
			printf("\nEnter your string:");
			scanf("%s",&c);
			
				strcpy(d,c);
				printf(" Copy String= %s",d);
		}
		else if(j==3)
		{
			printf("\nEnter your First string:");
			scanf("%s",&a);
			
			printf("\nEnter your Second string:");
			scanf("%s",&b);
			
			printf("Concat String is %s%s",a,b);	
		}
		else if(j==4)
		{
			char e[20];
			printf("\nEnter your First string:");
			scanf("%s",&e);
			
			printf("Show String is %s",e);
		}
		else if (j==5)
		{
			printf("Enter String :");
			scanf("%s",&a);
			
			strrev(a);
			printf("Reverse String is %s",a);
		}
		else if(j==6)
		{
			printf("\nEnter your First string:");
			scanf("%s",&a);
			
			strcpy(b,a);
			printf("\nNormal String %s",a);
			printf("\nReverse String %s",b);
			
			if(strcmp(a,b)==0)
			{
				printf("\nString is Palindrome");
			}
			else
			{
				printf("\nString is not Palindrome");
			}		
		}
		else if(j==7)
		{
			char string[1000], sub[1000];
   			int position, length, c = 0;
 
   			printf("Input a string\n");
   			scanf("%s",&string);
 
   			printf("Enter the position and length of substring\n");
   			scanf("%d%d", &position, &length);
 
   			while (c < length)
			{
      		sub[c] = string[position+c-1];
      		c++;
   			}
   			sub[c] = '\0';
 
   			printf("Required substring is \"%s\"\n", sub);	
		}
		else if(j==8)
		{
			printf("THANK YOU VISIT AGAIN:");
			s=false;
		}
	}
		
}
	


