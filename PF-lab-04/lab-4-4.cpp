#include<stdio.h>
#include<string.h>

int main(){
	
	int password=1234, userpass;
	char username[20]="admin", name[20];
	
	printf("Enter userpass: ");
	scanf("%d", &userpass);
	
	printf("Enter name: ");
	scanf("%s", &name);
	
	if(password==userpass && strcmp(username,name)==0){
		printf("Login Successful");
	}else{
		printf("Invalid Credentials");
	}
	return 0;
	
}
