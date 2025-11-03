
#include <stdio.h>
#include "pilha.h"

int main(){

    pilha p1, p2;
    int i;

    stack_init(&p1);
    stack_init(&p2);

    for(i=0; i<3; i++)
        push(&p1,i);

    for(i=0; i<4; i++)
        push(&p2,i);

    if(pilhaMaior(p1,p2))
        printf("P1 e maior");

    else
        printf("P2 e maior");

    return 0;
}
