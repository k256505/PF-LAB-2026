#include<stdio.h>
#include<string.h>
 
struct Patient {
    char name[50];
    int age;
    char bloodType[5];
    int patientID;
    char diagnosis[100];
};
 
void displayAll(struct Patient p[], int n){
    printf("\n%-20s %-5s %-10s %-5s %-30s\n", "Name", "Age", "Blood", "ID", "Diagnosis");
    printf("--------------------------------------------------------------------\n");
    for(int i = 0; i < n; i++)
        printf("%-20s %-5d %-10s %-5d %-30s\n", p[i].name, p[i].age, p[i].bloodType, p[i].patientID, p[i].diagnosis);
}
 
void searchByID(struct Patient p[], int n, int id){
    for(int i = 0; i < n; i++){
        if(p[i].patientID == id){
            printf("Name: %s | Age: %d | Blood: %s | Diagnosis: %s\n", p[i].name, p[i].age, p[i].bloodType, p[i].diagnosis);
            return;
        }
    }
    printf("Patient not found\n");
}
 
int main(void){
    struct Patient p[5];
    for(int i = 0; i < 5; i++){
        printf("\nPatient %d:\n", i + 1);
        printf("Name: ");      scanf(" %[^\n]", p[i].name);
        printf("Age: ");       scanf("%d", &p[i].age);
        printf("Blood Type: "); scanf(" %s", p[i].bloodType);
        printf("Patient ID: "); scanf("%d", &p[i].patientID);
        printf("Diagnosis: "); scanf(" %[^\n]", p[i].diagnosis);
    }
    displayAll(p, 5);
    int id;
    printf("\nEnter ID to search: ");
    scanf("%d", &id);
    searchByID(p, 5, id);
    return 0;
}