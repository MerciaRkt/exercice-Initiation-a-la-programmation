//Affichage du moyenne de deux notes
#include<stdio.h>
int main()
{
  float a,b,coef_a,coef_b,moyenne,c,d;
  printf("entrez la note a:");
  scanf("%f",&a);
  printf("entrez la coef_a:");
  scanf("%f",&coef_a);
  printf("entrez la note b:");
  scanf("%f",&b);
  printf("entrez la coef_b:");
  scanf("%f",&coef_b);maximum
    c=(a*coef_a)+(b*coef_b);
    d=coef_a+coef_b;
    moyenne=c/d;
  printf("Leur moyenne est:%f",moyenne);
  return(0);
}
  
  
