#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPremier(int a)
{ 
    int i;
     for(i=2; i<= a/2; i++){
      if(a % i == 0){
          return 0;}
        else 
         return 1;
       
      
    }
}

int main()
{
    int a;
    printf("enter a :");
    scanf("%d",&a); 
    if(isPremier(a))
      printf("%d is premier",a);
    else
      printf("%d isn't premier",a); 
    return 0;
}