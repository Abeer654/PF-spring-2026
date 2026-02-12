#include<stdio.h>
int main(){
	int attendance;
	printf("Enter Your Attendance percentage: ");
	scanf("%d", &attendance);
	
	if(attendance >= 75){
		printf("You are eligible to sit in exam");
	}
	else{
		printf("You are not elegible to sit in EXAM");
	}
	return 0;
}
