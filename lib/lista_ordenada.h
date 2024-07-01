//
// Created by Lucas on 25/06/2024.
//

#ifndef LISTA_ORDENADA_H
#define LISTA_ORDENADA_H

#define CAPACIDADE 60

typedef struct {
    int quantidade;
    int elementos[CAPACIDADE];
}lista_t;

//Cria uma lista com uma capacidade limitada de elementos
//(essa capacidade pode ser alterada no arquivo lista_ordenada.h)
lista_t* lista_cria();

//Adiciona um elemento à lista
//Retorna 1 se o processo for bem-sucedido ou 0 em caso de falha
int lista_adiciona(lista_t*lista, int elemento);

//Procura um elemento na lista
//Retorna a posição do elemento ou -1 caso o elemento não esteja na lista
int lista_procura(lista_t*lista, int elemento);

//Remove um elemento da lista
//Retorna 1 se o processo for bem-sucedido ou 0 em caso de falha
int lista_remove(lista_t*lista, int pos);

#endif //LISTA_ORDENADA_H
