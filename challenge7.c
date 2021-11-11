#include <stdio.h>
int main()
{
   int a, b;

   printf("enter a: \n");
   scanf("%d", &a);

   printf("enter b: \n");
   scanf("%d", &b);

   printf("a + b = %d\n a - b = %d\n a * b = %d\n a / b = %.2f\n a % b = %d\n", a+b,a-b,a*b,(float)a/b,a%b);
 
   return 0;


}