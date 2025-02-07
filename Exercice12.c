//calcul qui affiche la somme de 1+2+...+n
#include<stdio.h>

int main ()
{
    int i, s, n;
    printf("veuillez entrer un nombre n: ");
    scanf("%d", &n);
    s=0;
    for (i=1; i<=n; i++)
    {
        s+=i;
    }
    printf("la somme de 1 à n est %d", s);
    return (0);
}