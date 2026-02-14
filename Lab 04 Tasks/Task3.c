#include<stdio.h>
int main(){
	int balance;
	printf("Enter your account balance: ");
	scanf("%d", &balance);
	if(balance > 0){
		printf("Positive Balance");
	}
	else if(balance <0){
		printf("Overdrawn");
	}
	else {
	printf("Zero Balance");
	}
	return 0;
}
