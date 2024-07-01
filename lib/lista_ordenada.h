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

lista_t* lista_cria();
int lista_adiciona(lista_t*lista, int elemento);
int lista_procura(lista_t*lista, int elemento);
int lista_remove(lista_t*lista, int pos);

#endif //LISTA_ORDENADA_H
