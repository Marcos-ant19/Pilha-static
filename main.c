#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){

    int tam;

    //Pedindo tamanho da pilha ao usuario
    printf("Digite o tamanho: ");
    scanf("%d", &tam);

    //Chamando a função criar pilha
    Pilha* P1 = criar(tam);
    Pilha* P2 = criar(tam);

    //Chamando a função copiar os valores da Pilha 1 para a Pilha 2
    copiar(P1, P2);

    //Liberado memória
    free(P1->vet);
    free(P1);
    free(P2->vet);
    free(P2);

    return 0;
}