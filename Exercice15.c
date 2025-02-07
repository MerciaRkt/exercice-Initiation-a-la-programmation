//calcule de 1+10+10^2+...+10^ n
#include<stdio.h>
#include<math.h>

int main ()
{    
    int i,n,s;
    printf ("entrez un nombre n");
    scanf("%d", &n);
    s=0;
    for(i=0; i<=n; i++)
    {
        s+=pow(10,i);
    }
    printf("la somme de 1+10+10^2+...+10^n est %d", s);
    return (0);
}