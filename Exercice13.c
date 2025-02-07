//caclul de 1*2*...*n
#include<stdio.h>

int main ()
{
    int i,n,m=1;
    printf ("Entrez le nombre n: ");
    scanf ("%d", &n);
    for (i=1; i<=n; i++)
    {
        m*=i;
    }
    printf("Le produit de 1*..*n est %d\n", m);
    return (0);
}