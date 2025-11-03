
#include <stdio.h>
#include "pilha.h"

int main(){

    pilha p1;
    int i;

    stack_init(&p1);

    for(i=0; i<3; i++)
        push(&p1,i+'0');

    full_Pop(&p1);

    return 0;
}
