#include <stdio.h>
#include <math.h>

int main()
{
   float a, b, c;
   float delta, x1, x2;
   float res;
   
   printf("notre equation : ax²+bx+c \n");
   
   printf("entrez a :\n");
   scanf("%f",&a);
   
   printf("entrez b :\n");
   scanf("%f",&b);
   
   printf("entrez c :\n");
   scanf("%f",&c);
   
   delta = pow(b,2) - 4*a*c;
   res=sqrt(delta);
   
   printf("deltas est :%.2f\n",delta);
   if(delta < 0){
           printf("il n'y a pas de solution \n");
 
   }
    else if(delta = 0){
        x1 = -b / (2*a);
      printf("il y a une seule solution à l'équation \n : %.2f \n");
    }
       
    else {
          x1 = ((-b - res) /(2*a));
          x2= ((-b + res)/(2*a));
      printf("l y a deux solutions qui sont x1 = %.2f et x2= %.2f \n", x1, x2);

    }
    
    return 0;

    
}