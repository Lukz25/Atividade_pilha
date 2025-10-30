
#include <stdio.h>
#include "pilha.h"

int main(){

    int i, impares;
    pilha p, pares;

    stack_init(&p);
    stack_init(&pares);


    for(i=1; i<11; i++)
        push(&p,i);


    impares = stack_odd(&pares, p);

    printf("%d impares\n", impares);

    for(i=0; i<pares.topo; i++)
        printf("%d ", pares.itens[i]);


    return 0;
}
