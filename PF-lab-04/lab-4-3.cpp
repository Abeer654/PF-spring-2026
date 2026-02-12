#include<stdio.h>
int main(){
	int num;
	
	printf("Enter any number: ");
	scanf("%d",&num);
	
	if(num==0){
		printf("ZERO");
	}else if(num>0){
		printf("POSITIVE");
	}else{
		printf("NEGATIVE");
	}
	return 0;
}
