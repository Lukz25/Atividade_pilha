
#include <stdio.h>
#include "pilha.h"

int main(){

    if(delimiter_verify("({[]})"))
        printf("Fechou");

    else
        printf("Nao fechou");


    return 0;
}
