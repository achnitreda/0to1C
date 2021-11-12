#include <stdio.h>

int main()
{

    float cel, fah;
    
    printf("température en degré fahrenheit: ");
    scanf("%f", &fah);
    
    cel = (fah - 32) * 5/9;

    printf("température en degré celsius: %.2f", cel);

    return 0;
    

}