#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha* criar(int tam){
    //Criando a pilha
    Pilha* p = malloc(sizeof(Pilha));
    p->topo = -1;
    p->vet = malloc(sizeof(float)*tam);
    p->tam = tam;

    return p;
}

int isFull(Pilha* p){
    //Verificando pilha cheia
    return p->topo == p->tam -1;
}

int isEmpty(Pilha* p){
    //verificando Pilha vazia
    return p->topo == -1;
}

float push(Pilha* p, float valor){
    //Criando a função push
    if(isFull(p)){
        printf("Pilha cheia!\n");
        return 0;
    }
    p->vet[++p->topo] = valor;
    return 1;
}
float pop(Pilha* p){
    //Criando função pop
    if(isEmpty(p)){
        printf("Pilha vazia!\n");
        return 0;
    }
    return p->vet[p->topo--];
}
//Criando função de copiar valores
void copiar(Pilha* P1, Pilha* P2){
    float valor;

    for(int i = 0;i < P1->tam;i++){
        printf("Digite[%d]: ", i+1);
        scanf("%f", &valor);
        push(P1, valor);
    }

    Pilha* aux = criar(P1->tam);
    while(!isEmpty(P1)){
        //desempilhar o P1 para o aux
        push(aux, pop(P1));
    }

    while(!isEmpty(aux)){
        //Criando uma variavel para guardar os valores da aux na auxi
        float auxi;
        auxi = pop(aux);
        //Empilhando auxi na P1
        push(P1, auxi);
         //Empilhando auxi na P2
        push(P2, auxi);
    }
    printf("==== PILHA 1 ====\n");
    //Imprimindo Pilha 1
    while(!isEmpty(P1)){
        printf("%.2f ", pop(P1));
    }

    printf("\n=== PILHA 2 ====\n");
     //Imprimindo Pilha 2
     while(!isEmpty(P2)){
        printf("%.2f ", pop(P2));
    }

}