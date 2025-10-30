
#include <stdio.h>
#include "pilha.h"

int main(){

    char palavra[10];
    int i;

    pilha p;

    stack_init(&p);

    scanf("%s", palavra);

    string_invert(&p, palavra);

    for(i=0; i<p.topo; i++)
        printf("%c", p.itens[i]);



    return 0;
}
