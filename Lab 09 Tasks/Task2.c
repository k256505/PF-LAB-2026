#include<stdio.h>

float applyDiscount(float price, int tier){
    (tier == 1) ? (price *= 0.95) :
    (tier == 2) ? (price *= 0.90) :
    (tier == 3) ? (price *= 0.80) :
    (tier == 4) ? (price *= 0.70) : (tier = tier);
    return price;
}

void printInvoice(float original, float discounted){
    printf("\n=============INVOICE=============\n");
    printf("Original Price   = %.2f\n", original);
    printf("Discount Amount  = %.2f\n", original - discounted);
    printf("Discounted Price = %.2f\n", discounted);
    (discounted < 2000) ? printf("Delivery Charges = 150.00\nTotal Amount     = %.2f\n", discounted + 150)
                        : printf("Delivery Charges = 0.00\nTotal Amount     = %.2f\n", discounted);
    printf("=================================\n");
}

int main(void){
    float price;
    int tier;
    printf("Enter original price: ");
    scanf("%f", &price);
    printf("Enter membership tier (1=Bronze, 2=Silver, 3=Gold, 4=Platinum): ");
    scanf("%d", &tier);

    float discounted = applyDiscount(price, tier);
    printInvoice(price, discounted);

    return 0;
}
