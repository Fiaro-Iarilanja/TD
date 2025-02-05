//Ceci est un programme qui lit deux notes et leurs coefficients et affiche leur moyenne.

#include <stdio.h>

int main()
{
    float note1,note2,coeff1,coeff2,moyenne;
    printf("Entrez note1: ");
    scanf("%f",&note1);
    printf("Entrez son coefficient: ");
    scanf("%f",&coeff1);
    printf("Entrez note2: ");
    scanf("%f",&note2);
    printf("Entrez son coefficient: ");
    scanf("%f",&coeff2);
    moyenne=((note1*coeff1)+(note2*coeff2))/(coeff1+coeff2);
    printf("Moyenne=%.2f\n",moyenne);
    return (0);
}