#include<stdio.h>
int main(){
	float data;
	printf("Enter your data consumption in GB: ");
	scanf("%f", &data);
	if(data <= 50){
		printf("Category: Basic User");
	}
	else if(data>=51 && data<=150){
		printf("Category: Standard User");
	}
	else
	printf("Category: Heavy User");
	return 0;
}
