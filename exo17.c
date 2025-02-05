//Ceci est un programme qui calcule et affiche S=1/1! + 1/2! + 1/3! +….+1/N!, où N est saisi au clavier.

#include <stdio.h>

int main()
{
    int N,i;
    float factorielle,somme;
    printf("Entrez N: ");
    scanf("%d",&N);
    factorielle=1;
    somme=0;
    for(i=1;i<=N;i++)
    {
        factorielle*=i;
        somme+=(1/factorielle);
    }
    printf("La somme de 1/1! jusqu'a 1/N! est: %f\n",somme);
    return (0);
}