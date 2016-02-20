#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

int main()
{
    char funcao[20];
    int valor;
    p *pilha = criarPilha();
    do
    {
        scanf("%s %d", funcao, &valor);
        if (strcmp(funcao,"push") == 0)
        {
            push(pilha, valor);
            printf("-\n");
        }
        else if(strcmp(funcao,"top") == 0)
        {
            printf("%d\n", top(pilha));
        }
        else if(strcmp(funcao,"pop") == 0)
        {
            printf("%d\n", pop(pilha));
        }
    } while(strcmp(funcao,"fim") != 0);
    printf("END\n");

    return 0;
}