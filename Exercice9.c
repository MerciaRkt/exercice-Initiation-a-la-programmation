//affiche le nombre pair compris entre 1 a n
#include <stdio.h>
int main()
{
    int i,n;
    printf ("entrez un nombre n");
    scanf("%d",&n);
    for (i=1;i<n;i=i++)
    {
        printf("Les nombres pairs sont:%d\n",i);
    }
   return(0);
}