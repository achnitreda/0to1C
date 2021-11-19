#include <stdio.h>

void isPremier(int N)
{ 
    int i, estpremier;
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
     
}
     

int main()
{
  int N;
  printf ("enter N :");
  scanf("%d",&N);
  isPremier(N);
}