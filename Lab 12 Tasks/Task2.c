#include<stdio.h>
#include<stdlib.h>
// (c) If realloc fails it returns NULL. If we immediately overwrite our pointer with
//     the NULL return, we lose the original pointer and can't free it, that's a
//     dangling/lost pointer and causes a memory leak. Always use a temp pointer.
//     After free(), set the pointer to NULL so it doesn't point to freed memory.
int main(void){
    int *contacts = (int *)malloc(3 * sizeof(int));
    if(contacts == NULL){ printf("malloc failed.\n"); return 1; }
    printf("Enter 3 contact IDs:\n");
    for(int i = 0; i < 3; i++){
        printf("Contact %d: ", i + 1);
        scanf("%d", &contacts[i]);
    }
    // expand to 5
    int *temp = (int *)realloc(contacts, 5 * sizeof(int));
    if(temp == NULL){
        printf("realloc failed. Original list preserved.\n");
        free(contacts);
        contacts = NULL;
        return 1;
    }
    contacts = temp;
    printf("Enter 2 more contact IDs:\n");
    for(int i = 3; i < 5; i++){
        printf("Contact %d: ", i + 1);
        scanf("%d", &contacts[i]);
    }
    printf("\nFull Contact List:\n");
    for(int i = 0; i < 5; i++)
        printf("Contact %d: %d\n", i + 1, contacts[i]);
    free(contacts);
    contacts = NULL;
    return 0;
}
