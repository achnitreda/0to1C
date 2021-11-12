#include <stdio.h>
#include <math.h>

int main()
{
   float lan, lar;

   printf("entrez la longueur du rectangle:\n");
   scanf("%f", &lan);

   printf("entrez le largeur du rectangle:\n");
   scanf("%f", &lar);

   float c = 2 * (lan + lar);
 
   printf("la circonférence d'un rectangle : %.2f",c);


   return 0;


}