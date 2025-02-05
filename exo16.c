//Ceci est un programme qui calcule et affiche S=1! + 2! + 3! +…. +N!, où N est saisie au clavier.

#include <stdio.h>

int main()
{
    int N,i,factorielle,somme;
    printf("Entrez N: ");
    scanf("%d",&N);
    factorielle=1;
    somme=0;
    for(i=1;i<=N;i++)
    {
        factorielle*=i;
        somme+=factorielle;
    }
    printf("La somme de 1! jusqu'a N! est: %d\n",somme);
    return (0);
}