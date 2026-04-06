#include<stdio.h>

int validatePIN(int storedPIN, int enteredPIN){
    return (storedPIN == enteredPIN) ? 1 : 0;
}

int main(void){
    int storedPIN = 4729;
    int entered;

    for(int i = 0; i < 3; i++){
        printf("Enter PIN: ");
        scanf("%d", &entered);

        if(validatePIN(storedPIN, entered)){
            printf("Access granted. Welcome!\n");
            break;
        } else {
            printf("Wrong PIN. Attempts remaining: %d\n", 2 - i);
            if(i == 2) printf("Card blocked. Contact your bank.\n");
        }
    }

    return 0;
}
