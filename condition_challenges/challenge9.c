#include <stdio.h>

int main() {
    int day, month, year;
    printf("enter DD/MM/YYYY:\t");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("%d-", day);
    switch (month){
        case 1:
            printf("january-");
            break;
        case 2: 
            printf("february-");
            break;
        case 3:
            printf("mars-");
            break;
        case 4: 
            printf("april-");
            break;
        case 5:
            printf("may-");
            break;
        case 6: 
            printf("june-");
            break;
        case 7: 
            printf("july-");
            break;
        case 8:
            printf("august-");
            break;
        case 9: 
            printf("september-");
            break;
        case 10: 
            printf("october-");
            break;
        case 11:
            printf("november-");
            break;
        case 12: 
            printf("december-");
            break;
        default:
            printf("error-");
    }
    printf("%d", year);
    return 0;
}