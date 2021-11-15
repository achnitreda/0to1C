#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char jour_semaine[7][20] = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
    srand(time(0));
    int a = rand() % 7;
    printf("%s",jour_semaine[a]);

    return 0;

}