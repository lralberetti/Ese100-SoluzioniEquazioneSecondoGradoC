#include "quadraticEquationSolver.h"

#include <math.h>

complexNumber calcolax1(float a, float b, float c)
{
    complexNumber soluzione;
    float delta;
    delta=calcoladelta(a,b,c);
    
    if(delta>=0)
    {
         soluzione.im = 0;
         soluzione.re = ((-b) + sqrt(delta))/(2*a);
    }
    else
    {
        soluzione.re= -b;
        soluzione.im = sqrt(-delta)/(2*a);
    }    
    return soluzione;
    }

complexNumber calcolax2(float a, float b, float c)
{
    complexNumber soluzione;
    float delta;
    delta=calcoladelta(a,b,c);
    
    if(delta>=0)
    {
       soluzione.im = 0;
       soluzione.re = ((-b) - sqrt(delta))/(2*a);
    }
    else
    {
        soluzione.re= -b;
        soluzione.im = sqrt(-delta)/(2*a);
    }    
    return soluzione;
}

    
float calcoladelta(float a, float b, float c){
    float delta=0;
    float potenza=1.0;
    delta=(calcolapotenza(b))-(4*a*c);
    return delta;
}

float calcolapotenza(float b)
{
    b=b*b;
    return b;
}