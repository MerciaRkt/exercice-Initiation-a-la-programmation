//produit negatif ou positif
#include<stdio.h>
int main()
{
  float n,p;
  printf("entrez un nombre n: ");
  scanf("%f",&n);
  printf("entrez un nombre p: ");
  scanf("%f",&p);
    if (((n<0)&&(p<0))||((n>0)&&(p>0)))
    {
      printf("leur produit est positif");
    }
    else
    {
      printf("leur produit est negatif");
    }
  return(0);
}
