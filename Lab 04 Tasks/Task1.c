#include<stdio.h>
int main(){
	float attendance;
	printf("Enter your attendance to check Eligibility: ");
	scanf("%f", &attendance);
	if(attendance >= 75){
		printf("\nSelected for Tournament");
	}
	else
	printf("\nNot selected");
	return 0;
}
