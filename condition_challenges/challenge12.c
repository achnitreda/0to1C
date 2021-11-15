#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,a,b;
    double dist1,dist2,dist;
    printf("Entrez le x1 et y1\n");
    scanf("%lf%lf",&x1,&y1);
    printf("Entrez le x2 et y2\n");
    scanf("%lf%lf",&x2,&y2);
    printf("Entrez le a et b\n");
    scanf("%lf%lf",&a,&b);
    dist1 = sqrt( pow(x1-a,2)+pow(y1-b,2) ); 
    dist2 = sqrt( pow(x2-a,2)+pow(y2-b,2) );
    dist = sqrt( pow(x1-x2,2)+pow(y1-y2,2) );
    if( dist == dist1 + dist2 ) printf("Le point est sur le segment.\n");
    else printf("Le point n'est pas sur le segment.\n");
    
    return 0;
}