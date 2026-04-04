#include<stdio.h>
#include<string.h>

int main(){
    typedef struct pokemon{
        char name[15];
        int hp;
        int speed;
    } pokemon;

    typedef struct legendarypokemon{
        pokemon normal;
        char ability[15];
    } legendarypokemon;

    typedef struct godpokemon{
        legendarypokemon legend;
        int specialattack;
    } godpokemon;

    godpokemon arceus;

    arceus.specialattack = 300;
    strcpy(arceus.legend.ability, "turn into stone");
    arceus.legend.normal.hp = 500;
    arceus.legend.normal.speed = 200;
    strcpy(arceus.legend.normal.name, "Arceus");

    printf("Name: %s\n", arceus.legend.normal.name);
    printf("HP: %d\n", arceus.legend.normal.hp);
    printf("Speed: %d\n", arceus.legend.normal.speed);
    printf("Ability: %s\n", arceus.legend.ability);
    printf("Special Attack: %d\n", arceus.specialattack);

    return 0;
}