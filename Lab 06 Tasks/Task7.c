#include<stdio.h>
int main(void){
    int num1,num2, input;
    printf("======| SIMPLE CALCULATOR |======\n");
    do{
        printf("\n1. Addition\n2. Subtraction\n3. Exit\n\nChoose an action from the above options (1-3): ");
        scanf("%d",&input);
        if(input == 1){
            printf("\nEnter 1st number: ");
            scanf("%d",&num1);
            printf("Enter 2st number: ");
            scanf("%d",&num2);
            printf("Sum = %d\n",num1+num2);
        }else if(input == 2){
            printf("\nEnter 1st number: ");
            scanf("%d",&num1);
            printf("Enter 2st number: ");
            scanf("%d",&num2);
            printf("Difference = %d\n", num1-num2);
        }else if(input == 3){
            printf("\nThanks for using our calculator!\n");
        }else{
            printf("\nInvalid Input! Try again\n");
        }
    }while(input != 3);

}
