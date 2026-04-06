#include<stdio.h>

int basicAttack(int dmg, int hp)  { printf("Basic attack! -%d HP\n", dmg); return hp - dmg; }
int powerStrike(int dmg, int hp)  { printf("Power strike! -%.0f HP\n", dmg * 2.5); return hp - (int)(dmg * 2.5); }
int heal(int dmg, int hp)         { printf("Healed! +20 HP\n"); return hp + 20; }
int poisonAttack(int dmg, int hp) { printf("Poison! -%d HP + poison effect!\n", dmg / 2); return hp - dmg / 2; }

int main(void){
    int hp = 100, dmg = 25;
    int (*action)(int, int);
    int choice;

    for(int turn = 1; turn <= 3; turn++){
        printf("\n--- Turn %d | HP: %d ---\n", turn, hp);
        printf("1. Basic Attack\n2. Power Strike\n3. Heal\n4. Poison Attack\n");
        printf("Choose action: ");
        scanf("%d", &choice);

        (choice == 1) ? (action = basicAttack)  :
        (choice == 2) ? (action = powerStrike)  :
        (choice == 3) ? (action = heal)         :
                        (action = poisonAttack);

        hp = action(dmg, hp);
        printf("HP after turn: %d\n", hp);
    }

    return 0;
}
