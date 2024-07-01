//
// Created by Lucas on 25/06/2024.
//

#include "lista_ordenada.h"
#include <stdlib.h>

lista_t* lista_cria() {
    lista_t*lista = malloc(sizeof(lista_t));
    if(lista) lista->quantidade = 0;
    return lista;
}

int lista_adiciona(lista_t*lista, int elemento) {
    if(lista->quantidade >= CAPACIDADE) return 0;

    int i = 0;
    for(;i < lista->quantidade;i++) if(elemento <= lista->elementos[i]) break;
    for(int j = lista->quantidade; j > i; j--) lista->elementos[j] = lista->elementos[j-1];

    lista->elementos[i] = elemento;
    lista->quantidade++;
    return 1;
}

int lista_procura(lista_t*lista, int elemento) {
    if(lista->quantidade < 1) return -1;
    int inicio = 0, fim = lista->quantidade-1, meio;

    while(inicio <= fim) {
        meio = (inicio + fim)/2;
        if(elemento == lista->elementos[meio]) return meio;
        if (elemento>lista->elementos[meio]) inicio = meio;
        else fim = meio;
    }
    return -1;
}

int lista_remove(lista_t*lista, int pos) {
    if(pos < 0 || pos > lista->quantidade || lista->quantidade < 1) return 0;
    for(int i = pos; i < lista->quantidade; i++) lista->elementos[i] = lista->elementos[i+1];
    lista->quantidade--;
    return 1;
}