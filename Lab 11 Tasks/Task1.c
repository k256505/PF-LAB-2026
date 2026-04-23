#include<stdio.h>
 
// totalPower(4) = 100*1 + 100*2 + 100*4 + 100*8 = 1500
// call stack: totalPower(4) -> totalPower(3) -> totalPower(2) -> totalPower(1) -> 100
 
int totalPower(int floors){
    if(floors == 1) return 100;
    return (100 * (1 << (floors-1))) + totalPower(floors - 1);
}
 
int main(void){
    int n;
    printf("Enter number of floors: ");
    scanf("%d", &n);
    printf("Total power consumption: %d kWh\n", totalPower(n));
    return 0;
}