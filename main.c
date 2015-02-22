#include <stdio.h>
#include <stdlib.h>

#include "complexNumbers.h"
#include "quadraticEquationSolver.h"


    
int main(int argc, char** argv) {
    float a,b,c;
    printf("Inserisci il coefficente a: ");
    scanf("%f",&a);
    while(a==0)
    {
        printf("hai inserito il coefficente uguale a 0\n");
        printf("Reinserisci il coefficente a maggiore o minore di 0: ");
        scanf("%f",&a);
    }
        printf("Inserisci il coefficente b: ");
    scanf("%f",&b);
    printf("Inserisci il coefficente c: ");
    scanf("%f",&c);

    complexNumber x1;
    complexNumber x2;
    
    x1=calcolax1 (a,b,c);
    x2=calcolax2 (a,b,c);
    
    printf("le due soluzione sono x1: %s \nx2: %s\n", formatComplexNumber(x1), formatComplexNumber(x2));
    
            return (EXIT_SUCCESS);
}

