//Ceci est un programme qui calcule les solutions d'une equation de second degre

#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,xo,x1,x2,reel,img,delta;
    printf("Entrez a: ");
    scanf("%f",&a);
    printf("Entrez b: ");
    scanf("%f",&b);
    printf("Entrez c: ");
    scanf("%f",&c);
    delta=(b*b)-(4*a*c);
    if(delta==0)
    {
        xo=-b/(2*a);
        printf("Admet une solution xo dans R\n");
        printf("xo=%.2f\n",xo);
    }
    else if(delta>0)
    {
        x1=(-b-sqrt(delta))/(2*a);
        x2=(-b+sqrt(delta))/(2*a);
        printf("Admet deux solutions dans R\n");
        printf("x1=%.2f x2=%.2f\n",x1,x2);
    }
    else
    {
        reel=-b/(2*a);
        img=sqrt(-delta)/(2*a);
        printf("Admet deux solutions dans C\n");
        printf("x1=%.2f - i(%.2f)  et x2=%.2f + i(%.2f)\n",reel,img,reel,img);
    }
    return (0);
}