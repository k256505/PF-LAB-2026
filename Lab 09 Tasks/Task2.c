#include<stdio.h>
#include<string.h>
float applydiscount(float x, int y){
    (y == 1)?(x *= 0.95):
    (y == 2)?(x *= 0.90):
    (y == 3)?(x *= 0.80):
    (y == 4)?(x *= 0.70):(y=y);
    return x;
}
void invoice(float x, float y){
    printf("\n=============INVOICE=============\nOriginal Price = %.2f\nDiscounted Price = %.2f\n",y,x);
    (x < 2000)?(printf("Delivery Charges = 150\nTotal Amount = %.2f",x+150)):(printf("Delivery Charges = 0\nTotal Amount = %.2f",x));
    printf("\n=================================\n");
}
int main(void){
    float price;
    int tier;
    printf("Enter your total amount = ");
    scanf("%f",&price);
    printf("Enter membership Tier (1=Bronze, 2=Silver, 3=Gold, 4=Platinum) = ");
    scanf("%d",&tier);
    float discounted = applydiscount(price, tier);
    invoice(discounted,price);
    return 0;
}
