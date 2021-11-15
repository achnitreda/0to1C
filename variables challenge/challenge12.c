#include <stdio.h>

int main()
{
   char str[3];
   char str1[3];

   printf("enter number: ");
   scanf("%s", &str);

   str1[0] = str[2];
   str1[1] = str[1];
   str1[2] = str[0];

   printf("reverse number: %s",str1);

   return 0;


}