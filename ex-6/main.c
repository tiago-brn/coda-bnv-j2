#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    printf("Bonjour, quel est votre prénom ?\n");
    char prenom[50];
    scanf("%s", prenom);
    printf("Utilisateur-ice : %s\n", prenom);
    printf("Bonjour %s, quel est votre âge ?\n", prenom);
    int age;
    scanf("%d", &age);
    printf("Utilisateur-ice : %d\n", age);
    int annee_naissance = 2026 - age;
    printf("%s, si vous êtes de la fin d'année, votre année de naissance est %d, sinon c'est %d\n", prenom, annee_naissance - 1, annee_naissance);

    exit(0);
}