#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
   return a + b;

}
int main()
{
   int a, b, som;

   printf("enter a :");
   scanf("%d",&a);

   printf("enter b :");
   scanf("%d",&b);
   
   som = add(a,b);
   
   printf("%d",som);

   return 0;
}