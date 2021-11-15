#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char c;
    printf("Donnez un caractere:\n");
    scanf("%c",&c);
    
    if(c>='a' && c<='z')
       printf("%c est une alphabet en minuscule.\n",c);
    else if(c>='A' && c<='Z')
       printf("%c est une alphabet en majuscule.\n",c);
    else
       printf("%c n'est pas une alphabet.\n",c);
    
    return 0;
}