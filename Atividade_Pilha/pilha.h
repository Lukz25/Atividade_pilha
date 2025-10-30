
#ifndef PILHA_H_
#define PILHA_H_
#include <stdbool.h>

#define STACK_MAX 10

typedef int stack_info;

typedef struct {
    stack_info itens[STACK_MAX];
    int topo;
}pilha;

/// Insere o elemento x no topo da pilha p
bool push(pilha *p, stack_info x);
/// Remove o item do topo
bool pop(pilha *p, stack_info * ret);
/// Acessa o elemento do topo da pilha p, devolvendo uma cópia do seu valor
stack_info top(pilha *p);
/// Devolve verdadeiro se a pilha p estiver vazia, falso caso contrário
bool stack_isempty(pilha *p);
/// Devolve verdadeiro se a pilha p estiver cheia, falso caso contrário
bool stack_isfull(pilha *p);
/// Inicializa a pilha p no estado vazio
void stack_init(pilha *p);


#endif // PILHA_H_
