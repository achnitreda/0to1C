#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float N;
    printf("Enter a Number:");
    scanf("%f",&N);
    
    for(i=0; i<=10; i++){
      printf("%.2f * %d = %.2f \n",N ,i ,N*i);
    
    }
    return 0;
}