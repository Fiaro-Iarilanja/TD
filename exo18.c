//Ceci est un programme qui lit deux entiers, calcule et affiche leur pgcd.

#include <stdio.h>

int main()
{
    int a,b,r,dvd,dvs,pgcd;
    printf("Entrez a: ");
    scanf("%d",&a);
    printf("Entrez b: ");
    scanf("%d",&b);
    if(a>b)
    {
        dvd=a;
        dvs=b;
    }
    else
    {
        dvd=b;
        dvs=a;
    }
    do
    {
        r=dvd%dvs;
        dvd=dvs;
        dvs=r;
    } while(r!=0);
    pgcd=dvd;
    printf("PGCD(%d,%d)=%d\n",a,b,pgcd);
    return (0);
}