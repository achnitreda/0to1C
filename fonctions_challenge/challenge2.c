#include <stdio.h>


void echanger (int a, int b)
{
     int c;
        c = a;
        a = b;
        b = c;
    printf("a = %d \n",a);
    printf("b = %d \n",b);

    
}

int main()
{
    int a, b, c;
    printf("enterz a :");
    scanf("%d",&a);
    printf("enterz b :");
    scanf("%d",&b);

    echanger(a,b);


    return 0;
}