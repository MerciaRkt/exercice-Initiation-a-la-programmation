//Resolution de l'equation du second degre
#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,delta,x1,x2,l,k;
    printf("entrez a");
    scanf("%f",&a);
    printf("entrez b");
    scanf("%f",&b);
    printf("entrez c");
    scanf("%f",&c);

    if (a==0)
    {
        x1=(-c/b);
        printf("il y a une solution %f",x1);
    }
    else
    //calcul du discriminant
        delta=b*b-(4*a*c);
        if (delta > 0)
        {   
            x1 = (-b - sqrt(delta)) / (2 * a);
            x2=(-b+sqrt(delta))/(2*a);
            printf("il y a deux solutions %f %f",x1,x2);
        }
        else if (delta==0)
        {
            x1=(-b/(2*a));
            printf("il y a une solution %f",x1);
        }
        else 
        {        
            delta=-delta;
            k=sqrt(delta)/(2*a);
            l=-b/(2*a);
            x1=(-b/(2*a));


            printf("il y a deux solutions complexes :x1=%f-%f\n",k,l);
            printf(" et x2=%f+%f\n",k,l);
        }
    return(0);
}
      
      
