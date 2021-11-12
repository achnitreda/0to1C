#include <stdio.h>
#include <math.h>

int main()
{
   float r;
    
   printf("entrez le rayon du cercle: \n");
   scanf("%f", &r);

   float C = 2*M_PI*r;

   printf("la circonférence du cercle: %.2f\n",C);

   return 0;


}