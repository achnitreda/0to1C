#include <stdio.h>
 
 void bubbleSrt(int arr[],int n)
 {
     int k, c, l;
     for(l=0;l<=n-1;l++)
     {
        for(k=0;k<=n-1;k++)
        {
        if(arr[k]>arr[k+1]){
            c = arr[k];
            arr[k] = arr[k+1];
            arr[k+1] = c;
            }
        }
    }
}
     
 
 int main()
 {
    int n, i;
    printf("entrez arrey size :");
    scanf("%d",&n);
    
    int arr[n];
    for(i=0;i<n;i++)
    {
    printf("entrez nombre d'elements arr[%d]:",i);
    scanf("%d",&arr[i]);
    }
    bubbleSrt(arr,n);

    for(i=0;i<n;i++)
    {
    printf("%d ",arr[i]);
    }
    return 0;

 }

