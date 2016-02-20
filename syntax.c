#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

int caracteres(p *pilha, char *teste)
{
    int i;
    int ch[256];
        ch['{'] = 0;
        ch['}'] = '{';
        ch['['] = 0;
        ch[']'] = '[';
        ch['('] = 0;
        ch[')'] = '(';

    for(i =0;i < strlen(teste);i++){
        if(teste[i] == 0){
            push(pilha, teste[i]);
        }else{
            int kappa = top(pilha);
                if(kappa == -1)
                    return 0;
                if(ch[teste[i]] != kappa)
                    return 0;
            pop(pilha).
        }
    }
}

int main(){
    char *vetor;
    vetor = (char *) malloc(sizeof(char));
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