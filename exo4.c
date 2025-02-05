//Ceci est un programme qui lit deux notes de type réel et affiche leur somme et leur moyenne

#include <stdio.h>

int main()
{
    float note1,note2,somme,moyenne;
    printf("Entrez note1: ");
    scanf("%f",&note1);
    printf("Entrez note2: ");
    scanf("%f",&note2);
    somme=note1+note2;
    moyenne=somme/2;
    printf("Sommme des notes=%.2f\n",somme);
    printf("Moyenne=%.2f\n",moyenne);
    return (0);
}