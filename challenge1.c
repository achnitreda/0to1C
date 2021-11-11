#include <stdio.h>

int main()
{
    int age,NR;
    char nom[50];
    char prenom[50];
    char sexe[50];

    printf("votre nom :\n");
    scanf("%s", &nom);

    printf("votre prenom :\n");
    scanf("%s", &prenom);

    printf("votre sexe :\n");
    scanf("%s", &sexe);

    printf("votre age :\n");
    scanf("%d", &age);

    printf("votre NR :\n");
    scanf("%d", &NR);

    printf("Nom : %s Prenom: %s Sexe: %s Age: %d Numero: %d", nom, prenom, sexe, age, NR);
    
    return 0;
  
}