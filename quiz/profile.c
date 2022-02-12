#include <stdio.h>

struct profile {
    char *name;
    int age;
    char *hobby;
};

void main() {
    struct profile arif;
    struct profile udin;

    arif.name = "Arif";
    arif.age = 300;
    arif.hobby = "Berburu slime";

    udin.name = "Udin";
    udin.age = 100;
    udin.hobby = "Bertapa di gua";

    printf("[arif] nama: %s. \n", arif.name);
    printf("[arif] usia: %i. \n", arif.age);
    printf("[arif] hobi: %s. \n", arif.hobby);

    printf("[udin] nama: %s. \n", udin.name);
    printf("[udin] usia: %i. \n", udin.age);
    printf("[udin] hobi: %s. \n", udin.hobby);
}
