//Ceci est programme qui calcule et affiche la multiplication 1*2*3*…*N ou N est saisie au clavier.

#include <stdio.h>

int main()
{
    int N,i,produit;
    printf("Entrez N: ");
    scanf("%d",&N);
    produit=1;
    for(i=1;i<=N;i++)
    {
        produit*=i;
    }
    printf("Le produit de 1 jusqu'a N= %d\n",produit);
    return (0);
}