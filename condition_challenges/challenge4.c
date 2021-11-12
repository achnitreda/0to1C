#include <stdio.h>


int main()
{
   float a, b, som;
   printf("entrez a : \n");
   scanf("%f", &a);

   printf("entrez b : \n");
   scanf("%f", &b);
   
   som = a + b;
   printf(" la somme :%.2f \n", som);

 
   if(a == b)
     printf("le triple: %.2f", som * 3);
    else
     printf("erreur 404");
   

   return 0;
   
}