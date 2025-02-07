//Diviseur d'un entier n saisie au clavier
#include <stdio.h>
int main ()
{
    int i,n;
    printf("Entrez un nomre n");
    scanf("%d",&n);
    i=1; 
    while (i<n)
    {
        if (n%i==0)
        {
            printf("les valeurs des diviseurs de n sont:%d",i);
        }
    }
   return(0);

}