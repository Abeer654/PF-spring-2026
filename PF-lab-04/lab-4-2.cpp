#include<stdio.h>
int main(){
	int units;
	printf("Enter the consumption of total units: ");
	scanf("%d",&units);
	
	if(units<=100){
		printf("Low Usage");
	}
	
	else if(units<=300 && units>=101){
		printf("Medium Usage");
	}else{
		printf("High Usage");
	}
	return 0;
	
}
