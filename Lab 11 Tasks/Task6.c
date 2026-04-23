#include<stdio.h>
#include<string.h>
 
struct Order {
    int orderID;
    char customer[50];
    char product[50];
    int quantity;
    float unitPrice;
    char status[20];
};
 
float computeTotal(struct Order o){ return o.quantity * o.unitPrice; }
 
void filterByStatus(struct Order orders[], int n, char *status){
    printf("\nOrders with status '%s':\n", status);
    int found = 0;
    for(int i = 0; i < n; i++){
        if(strcmp(orders[i].status, status) == 0){
            printf("ID: %d | %s | %s | Total: %.2f\n", orders[i].orderID, orders[i].customer, orders[i].product, computeTotal(orders[i]));
            found = 1;
        }
    }
    if(!found) printf("No orders found.\n");
}
 
int main(void){
    struct Order orders[4];
    for(int i = 0; i < 4; i++){
        printf("\nOrder %d:\n", i + 1);
        printf("Order ID: ");     scanf("%d", &orders[i].orderID);
        printf("Customer: ");     scanf(" %[^\n]", orders[i].customer);
        printf("Product: ");      scanf(" %[^\n]", orders[i].product);
        printf("Quantity: ");     scanf("%d", &orders[i].quantity);
        printf("Unit Price: ");   scanf("%f", &orders[i].unitPrice);
        printf("Status (Pending/Shipped/Delivered): "); scanf(" %s", orders[i].status);
    }
    printf("\n--- Itemized Bills ---\n");
    for(int i = 0; i < 4; i++)
        printf("Order %d | %s | %s | Qty: %d | Total: %.2f | Status: %s\n", orders[i].orderID, orders[i].customer, orders[i].product, orders[i].quantity, computeTotal(orders[i]), orders[i].status);
 
    char status[20];
    printf("\nFilter by status: ");
    scanf(" %s", status);
    filterByStatus(orders, 4, status);
    return 0;
}