//Ceci est un programme qui lit trois valeurs et affiche leur maximum.

#include <stdio.h>

int main()
{
    float a,b,c,max;
    printf("Entrez a: ");
    scanf("%f",&a);
    max=a;
    printf("Entrez b: ");
    scanf("%f",&b);
    if(b>max)
    {
        max=b;
    }
    printf("Entrez c: ");
    scanf("%f",&c);
    if(c>max)
    {
        max=c;
    }
    printf("Le maximum entre ces trois nombres est %.2f\n",max);
    return (0);
}