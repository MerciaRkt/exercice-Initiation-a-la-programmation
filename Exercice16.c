//calcul de 1!+2!+...+n!
#include <stdio.h>
int main()

{
     int i,n,s,f ;
     printf ("entrez le nomre n");
     scanf("%d",&n);
     f=1;
     s=0;
     for(i=1;i<=n;i++)
     {
        f=f*i;
        s=s+f;
     }
        printf("la somme de 1!+2!+...+n!est %d",s);
     
     return(0);

}