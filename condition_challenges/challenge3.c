#include <stdio.h>

int main()
{
   float a, b;
   printf("entrez a : \n");
   scanf("%f", &a);

   printf("entrez b : \n");
   scanf("%f", &b);

   printf("%.2f %s %.2f", a, a > b ? ">" : a < b ? "<" : "=", b);

   return 0;


}