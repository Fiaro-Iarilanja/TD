//Ceci est un programme qui calcule et affiche la somme s=1 + 10 + 10^2+ ….+ 10^N ou N est saisi au clavier.

#include <stdio.h>
#include <math.h>

int main()
{
    int N,i,somme;
    printf("Entrez N: ");
    scanf("%d",&N);
    somme=0;
    for(i=0;i<=N;i++)
    {
        somme+=pow(10,i);
    }
    printf("La somme 1 jusqu'a 10^N= %d\n",somme);
    return (0);
}
