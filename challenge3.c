#include <stdio.h>

int main()
{
    float mile, kilometre;

    printf("la distance en kilometre: ");
    scanf("%f", &kilometre);
    

    mile = kilometre * 0.621371;

    printf("%f", mile);
    
    return 0;
}