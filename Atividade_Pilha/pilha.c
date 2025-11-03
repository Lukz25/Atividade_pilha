
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

/// Retorna o número de elementos da pilha que possuem valor ímpar e faça uma nova pilha com todos os valores pares.
int stack_odd(pilha *pares, pilha p){

    int i, impares=0;

    for(i=0; i<p.topo; i++){

        if(p.itens[i]%2 == 1)
            impares++;

        else
            push(pares, p.itens[i]);

    }

    return impares;


}

///  Verifica se uma expressão possui parênteses, colchetes e chaves balanceados
bool delimiter_verify(char expressao[]){

    pilha abertura;
    int i, tamanho_expressao;

    stack_init(&abertura);

    tamanho_expressao = strlen(expressao);

    for(i=0; i<tamanho_expressao; i++){

        if(expressao[i] == '('||expressao[i] == '{'||expressao[i] == '[')
            push(&abertura, expressao[i]);

        else if(expressao[i] == ')'||expressao[i] == '}'||expressao[i] == ']'){

            if(stack_isempty(&abertura))
                return false;

            char delimitador;

            pop(&abertura, &delimitador);

            switch(expressao[i]){

                case')':
                    if(delimitador != '(')
                        return false;

                    break;

                case'}':
                    if(delimitador != '{')
                        return false;

                    break;

                case']':
                    if(delimitador != '[')
                        return false;

                    break;

            }

        }

    }

    return stack_isempty(&abertura);

}

///Leia números inteiros do usuário até que a pilha esteja cheia.Interrompa a entrada quando a pilha estiver cheia e exiba uma mensagem.
void stack_read_int(){

    pilha p;
    stack_init(&p);
    int numero;

    while (!stack_isfull(&p)) {
        if (scanf("%d", &numero) != 1) {
            while (getchar() != '\n');
            continue;
        }
        if (!push(&p, numero)) {
            break;
        }
    }
    if (stack_isfull(&p)) {
        printf("A pilha esta cheia!\n");
    }
    while (!stack_isempty(&p)) {
        stack_info elemento;
        if (pop(&p, &elemento)) {
            printf("%d ", elemento);
        }
    }
    printf("\n");

}

///Testa se uma pilha P1 tem mais elementos que uma pilha P2.
bool pilhaMaior(pilha p1, pilha p2){
    return p1.topo > p2.topo;
}








