#include <stdio.h>

int main()
{
    float n;
   printf("entrez votre moyenne note : ");
   scanf(" %f",&n);
   
   if(n < 10) 
        printf("tu es recale ");
    else if(n >= 10 && n < 12) 
        printf("mention passable");
    else if(n >= 12 && n < 14) 
        printf("mention assez bien");
    else if(n >= 14 && n < 16) 
        printf("mention bien");
    else 
        printf("mention tres bien");
    

   return 0;

}