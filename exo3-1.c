/*Ceci est un programme permettant d’échanger les valeurs de trois variables a, b et c et ce quel que soit
leur contenu préalable*/

#include <stdio.h>

int main()
{
    float a,b,c,d;
    printf("Entrez a: ");
    scanf("%f",&a);
    printf("Entrez b: ");
    scanf("%f",&b);
    printf("Entrez c: ");
    scanf("%f",&c);
    d=a;
    a=b;
    b=c;
    c=d;
    printf("La permutation donne: a=%.2f , b=%.2f et c=%.2f\n",a,b,c);
    return (0);
}