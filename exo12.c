//Ceci est un programme qui calcule et affiche la somme 1+2+3+…+N ou N est saisie au clavier.

#include <stdio.h>

int main()
{
    int N,i,somme;
    printf("Entrez N: ");
    scanf("%d",&N);
    somme=0;
    for(i=1;i<=N;i++)
    {
        somme+=i;
    }
    printf("La somme 1 jusqu'a N= %d\n",somme);
    return (0);
}