#include<stdio.h>
// Ce programme vous donner des informations (classe - Ad.Réseau - Ad.Machine) sur une adresse donnnée
// Made by HAMZA EZZAHIRY
void main()
{
    int a1,a2,a3,a4;
    printf("\n Donner une adresse (comme ca 192.128.1.1):\n\t");
    scanf("%d.%d.%d.%d",&a1,&a2,&a3,&a4);
    printf("\n------------------------------------------------------");
    if(a1>247) printf("\nErreur");
    else if(a1>239)
        printf("\n\tclasse E");
    else if(a1>223)
        printf("\n\tclasse D");
    else if(a1>191)
        { printf("\n\tclasse C");
        printf("\n\tAdresse Reseau : %d.%d.%d.0",a1,a2,a3);
        printf("\n\tAdresse Machine : %d",a4); }
    else if(a1>127)
        {
          printf("\n\tClasse B");
        printf("\n\tAdresse Reseau : %d.%d.0.0",a1,a2);
        printf("\n\tAdresse Machine : %d.%d",a3,a4);}
    else
        {   printf("\n\tClasse A");
            printf("\n\tAdresse Reseau : %d.0.0.0",a1);
            printf("\n\tAdresse Machine : %d.%d.%d",a2,a3,a4); }
    printf("\n------------------------------------------------------\n\n");
}
