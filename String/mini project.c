#include<stdio.h>
#include<string.h>
main()
{
	char username[20],email[20],password[20],cpassword[20];
	
	printf("\nEnter the username:");
	gets(username);
	printf("\nEnter the email:");
	gets(email);
	printf("\nEnter the password:");
	gets(password);
	printf("\nconform your password:");
	gets(cpassword);
	
	if(strcmp(password,cpassword)==0){
		printf("\nusername=%s",username);
		printf("\nemail=%s",email);
		printf("\npassworde=%s",password);	
		printf("\nconform password=%s",cpassword);	
	}else{
		printf("Password and conform password does not matched:");
	}
	
	
	
	
	}
