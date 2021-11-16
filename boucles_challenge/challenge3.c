#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, estpremier;
    printf("enter a number:");
    scanf("%d",&N);
    estpremier = 1;
    
    for(i=2; i<= N/2; i++){
      if(N % i == 0){
       estpremier = 0;
       break;
      }
    
    }
    if(estpremier == 1)
      printf("%d est premier",N);
    else
     printf("%d non premier",N);
     
    return 0;
}