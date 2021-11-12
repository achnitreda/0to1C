#include <stdio.h>

int main()
{
   int nb; 
   printf("entez le nombre: \n");
   scanf("%d", &nb);

   printf("ce nombre est %s \n", nb % 2 == 0 ? "pair" : "impair");

   return 0;
   

}