#include <stdio.h>

int main()
{
    float mile, kilometre;

    printf("la distance en mile: ");
    scanf("%f", &mile);

    kilometre = mile * 1.609;

    printf("la distance en kilometre: %.2f",kilometre);
    
    return 0;
}