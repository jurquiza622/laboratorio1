#include <stdio.h>
#include <stdlib.h>
#define V 5



int main()
{
    int legajo[V]={4,1,2,7,3};
    float sueldo[V]={5000, 2500.42, 5500, 8564.47, 2861.45};
    int i, j;
    int auxInt;
    float auxFloat;

    for(i=0; i<V-1; i++)
    {
        for(j=i+1; j<V; j++)
        {
            if(legajo[i]<legajo[j])
            {
               auxInt = legajo[i];
               legajo[i] = legajo[j];
               legajo[j] = auxInt;

               auxFloat = sueldo[i];
               sueldo[i] = sueldo[j];
               sueldo[j] = auxFloat;


            }
        }
    }

    for(i=0; i<V; i++)
    {
        printf("%d--%.2f\n", legajo[i], sueldo[i]);
    }




    return 0;
}
