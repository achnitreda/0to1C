#include <stdio.h>

int main()
{
   int nb, a, b, c;

   printf("enter number: \n");
   scanf("%d", &nb);

   a = (nb % 100) % 10;
   b = (nb % 100) / 10;
   c = nb / 100;

   printf("enter reverse number: %d %d %d", a, b, c);

   return 0;


}