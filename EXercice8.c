//Algorithme qui affiche 1 jusqu'a n ou n est est une valeur saisie au clavier
#include <stdio.h>
int main()
{
    int i,n;
    printf("entrez une valeur n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf ("%d",i);
    }
  return(0);

}