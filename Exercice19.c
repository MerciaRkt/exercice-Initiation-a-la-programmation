//Affiche si deux entiers sont premiers entres eux ou non
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
        if (a==1)
        {
            printf("a et b sont premiers entre eux\n");
        }
        else{
            printf("a et b ne sont pas premiers entre eux\n");
        }
    return(0);
}