//calcul de 1/1!+...+1/n!
#include <stdio.h>
int main()
{
    int i,n,f;
    float s;
    printf("entrez un nombre n");
    scanf("%d",&f);
    s=0;
    f=1;

    for(i=1;i<=n;i++)
    {
        f=f*i;
        s=s+(1/f);
    }
    printf("la somme est:%f",s);
    return(0);

}