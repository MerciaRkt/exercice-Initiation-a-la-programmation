//Calcul et affiche le factoriel de n saisie au clavie
#include <stdio.h>
int main()
{
    int i,n,f;
    printf ("entrez un nombre n");
    scanf("%d", &n);
    f=1;
    for(i=1; i<=n; i++)
    {
        f*=i;
        printf("le factoriel de n est %d", f);
    }
    return (0);
}