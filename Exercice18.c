//Calcul et affiche le pgcd de deux entiers a et b
#include <stdio.h>
int main()

{
    int a ,b, reste;
    printf ("Veuillez entrez a: ");
    scanf("%d",&a);
    printf("Veuillez entrez b: ");
    scanf("%d",&b);
    while (b!=0)
    {
        reste=(a%b);
        a=b;
        b=reste;
    }
    printf("Le pgcd de a et b est: %d\n",a);
    return(0);
}
