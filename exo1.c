//Ceci est un programme qui informe si un nombre est positif ou negatif

#include <stdio.h>

int main()
{
    int nb;
    printf("Entrez le nombre: ");
    scanf("%d",&nb);
    if(nb<0)
    {
        printf("Ce nombre est negatif\n");
    }
    else
    {
        printf("Ce nombre est positif\n");
    }
    return (0);
}