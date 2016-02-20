#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

typedef struct no no;
struct no
{
    int num;
    no *next;
};

typedef struct Pilha p;
struct Pilha
{
    no *top;
    int tamanho;
};

p *criarPilha()
{
    p *pilha;
    pilha = (p *) malloc(sizeof(p));
    pilha->top = NULL;
    pilha->tamanho = 0;
}

void push(p *pilha, int x)
{
    no *novo;
    novo = (no *) malloc(sizeof(no));
    if(pilha->top == NULL)
    {
        novo->num = x;
        novo->next = NULL;
        pilha->top = novo;
    }
    else
    {
        novo->num = x;
        novo->next= pilha->top;
        pilha->top = novo;
    }
    pilha->tamanho++;
}

int top(p *pilha)
{
    if(pilha-> top == NULL)
        return -1;
    return pilha->top->num;
}


int pop(p *pilha)
{
    no *aux;
    if(pilha->top == NULL)
    {
        return -1
    }
    else
    {
        int n = pilha->top->numero;
        aux = pilha->top;
        pilha->top = pilha->top -> next;
        pilha->tamanho--;
        free(aux);
    }
    return n;
}


