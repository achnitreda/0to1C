#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[50];
    int i;
   
    printf("enter un mot : \n");
    gets(str);
   
    int lg = strlen(str);
   
    for(i=0; i < lg/2; i++){
       if(str[i] != str[lg - 1 - i]){
         printf("Ce mot n'est pas un palindrome.");
		   return 0;
		
        }
     }   
    printf("ce mot est palindrome");
     return 0;
}