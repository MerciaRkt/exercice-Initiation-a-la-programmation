//calcul de 1+1/2+...+1/n
#include<stdio.h>

int main ()
{
    int i , n;
    float s = 0;

    printf("veuillez entrer un nombre n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        s=s + (float) (1/i);
    } 
    printf("la somme de 1+1/2+...+1/n est %f", s);
    return (0);
}