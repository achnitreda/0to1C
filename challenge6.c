#include <stdio.h>

int main()
{

    float celsius, fahrenheit;
    
    printf("température en degré fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    celsius = (fahrenheit - 32) * 5/9;

    printf("température en degré celsius: %.2f", celsius);

    return 0;
    

}