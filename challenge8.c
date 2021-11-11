#include <stdio.h>
int main()
{
   int a, b, c, d;

   printf("enter a: \n");
   scanf("%d", &a);

   printf("enter b: \n");
   scanf("%d", &b);

   printf("enter c: \n");
   scanf("%d", &c);
   
   printf("enter d: \n");
   scanf("%d", &d);


   printf("somme = %d\n", a + b + c + d);
   printf("Moyenne = %d", (a + b + c + d) / 4);

   return 0;
}