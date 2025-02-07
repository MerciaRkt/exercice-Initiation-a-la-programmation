#include<stdio.h>
int main()
{
  float a,b,c;
  printf("entrez la valeur de a:");
  scanf("%f",&a);
  printf("entrez la valeur de b:");
  scanf("%f",&b);
  c=a;
  a=b;
  b=c;
  printf("Apres echange, la valeur de a est %f et la valeur de b est %f",a,b);
  return(0);
}
  
  
  
