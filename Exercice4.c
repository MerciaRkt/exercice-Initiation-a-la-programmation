//Affiche la somme et moyenne de deux notes
#include<stdio.h>
int main()
{
  float a,b,somme,moyenne;
  printf("entrez la note a:");
  scanf("%f",&a);
  printf("entrez la note b:");
  scanf("%f",&b);
  somme=a+b;
  moyenne=somme/2;
  printf("la somme des deux notes est:%f et la moyenne est:%f",somme,moyenne);
  return(0);
}
