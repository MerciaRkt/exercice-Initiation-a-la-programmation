#include <stdio.h>

int main() 
{
    float a, b, c;

    printf("Entrez une valeur A:");
    scanf("%f", &a);

    printf("Entrez une valeur B:");
    scanf("%f", &b);
    
    printf("Entrez une valeur C:");
    scanf("%f", &c);

    if (a > b && a > c) 
        printf("Le maximum est %f", a);
    else if (b > a && b > c) 
        printf("Le maximum est %f", b);
    else
        printf("Le maximum est %f", c);

    return(0);
}