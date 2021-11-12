#include <stdio.h>

int main()
{
    float mile, kilometre;

    printf("la distance en kilometre: ");
    scanf("%f", &kilometre);
    

    mile = kilometre * 0.621371;

    printf("la distance en mile: %.2f", mile);
    
    return 0;
}