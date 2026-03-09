#include<stdio.h>
int main(void){
    int i,v_count=0,c_count=0;
    char word[100];
    printf("Enter a word: ");
    scanf("%s",&word);
    for(i=0;word[i]!='\0';i++){
        if(word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U' || word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u'){
            v_count++;
        }else{
            c_count++;
        }
    }
    printf("\nTotal Vowels = %d\nTotal Consonants = %d",v_count,c_count);
}
