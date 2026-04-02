#ifndef PILHA_H
#define PILHA_H

//Estrutura da pilha
typedef struct Pilha{
    int topo;
    float* vet;
    int tam;
}Pilha;

//Funções
Pilha* criar(int tam);
int isFull(Pilha* p);
int isEmpty(Pilha* p);
float push(Pilha* p, float valor);
float pop(Pilha* p);
void copiar(Pilha* P1, Pilha* P2);

#endif