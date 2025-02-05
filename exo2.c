/*Ceci est un programme qui demande deux nombres a l’utilisateur et l’informe ensuite si leur produit 
est négatif ou bien positif*/

#include <stdio.h>

int main()
{
    float a,b;
    printf("Entrez le premier nombre: ");
    scanf("%f",&a);
    printf("Entrez le second nombre: ");
    scanf("%f",&b);
    if(a<0 || b<0)
    {
        printf("Leur produit est negatif\n");
    }
    else
    {
        printf("Leur produit est positif\n");
    }
    return (0);
}