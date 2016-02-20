#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

typedef struct no no;

typedef struct Pilha p;

p *criarPilha();

void push(p *pilha, int numero);

int top(p *pilha);

int pop(p *pilha);

#endif // PILHA_H_INCLUDED