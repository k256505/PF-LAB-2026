#include<stdio.h>
int main(){
    float total, discount, bill;
    printf("Enter your total purchase amount: ");
    scanf("%f", &total);
    if(total >= 5000){
        discount = total * 0.20;
        printf("Discount Applied: 20%%\n");
    }
    else if(total >= 3000){
        discount = total * 0.10;
        printf("Discount Applied: 10%%\n");
    }
    else{
        discount = 0;
        printf("No Discount Applied\n");
    }
    bill = total - discount;
    printf("Discount Amount: %.2f\n", discount);
    printf("Final Bill to Pay: %.2f\n", bill);
    return 0;
}
