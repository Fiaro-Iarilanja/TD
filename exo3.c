/*Ceci est un programme permettant d’échanger les valeurs de deux variables A et B, et ce quel que soit
leur contenu préalable*/

#include <stdio.h>

int main()
{
    float a,b,c;
    printf("Entrez a: ");
    scanf("%f",&a);
    printf("Entrez b: ");
    scanf("%f",&b);
    c=a;
    a=b;
    b=c;
    printf("La permutation donne: a=%.2f et b=%.2f\n",a,b);
    return (0);
}