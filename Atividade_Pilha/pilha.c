
#include "pilha.h"
/// Insere o elemento x no topo da pilha p
bool push(pilha *p, stack_info x){
    if(p->topo == STACK_MAX)
        return false;
    p->itens[p->topo++] = x;
    return true;
}

/// Remove o item do topo
bool pop(pilha *p, stack_info * ret){
    if(p->topo == 0)
        return false;
    (*ret) = p->itens[--p->topo];
    return true;
}

/// Acessa o elemento do topo da pilha p, devolvendo uma cópia do seu valor
stack_info top(pilha *p){
    return p->itens[p->topo-1];
}

/// Devolve verdadeiro se a pilha p estiver vazia, falso caso contrário
bool stack_isempty(pilha *p){
    return (p->topo == 0);
}

/// Devolve verdadeiro se a pilha p estiver cheia, falso caso contrário
bool stack_isfull(pilha *p){
    return (p->topo == STACK_MAX);
}

/// Inicializa a pilha p no estado vazio
void stack_init(pilha *p){
    p->topo = 0;
}

/// Inverte uma string
bool string_invert(pilha *p, char palavra[]){

    int i, tamanho;
    tamanho = strlen(palavra);

    if(p->topo == STACK_MAX)
        return false;

    for(i=tamanho-1; i >= 0; i--){
        push(p,palavra[i]);
    }

    return true;
}

