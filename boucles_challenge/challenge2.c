#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l, i, j, k;
    printf("entrez nombre de ligne:");
    scanf("%d",&l);

    for(i=1;i<=l;i++){
        for(k=l-i;k>=1;k--)
        printf(" ");
        for(j=1; j<=2*i-1;j++)
        printf("*");
        printf("\n");
    }   

   

    return 0;

}