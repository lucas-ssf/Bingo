#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib/bibliotecas.h"

struct cartelas {
    char*id;
    lista_t*elementos;
};

int main(void) {
    struct cartelas cartela[100];
    lista_t*lista_cartelas = lista_cria(),*lista_sorteados = lista_cria();
    char*opcoes[] = {"Entre com o numero de cartelas: ", "Entre com o numero de elementos por cartela (max. 60): "};
    char*respostas[2];
    respostas[0] = malloc(sizeof(char)*3);
    respostas[1] = malloc(sizeof(char)*3);

    menu_input("     BINGO!     ",
                2,
                opcoes,
                respostas,
                4);

    int numero_cartelas = strtol(respostas[0],NULL,10);
    int numero_elementos = strtol(respostas[1],NULL,10);

    for(int i = 0; i < numero_cartelas; i++) {
        cartela[i].id = malloc(sizeof(char)*64);
        cartela[i].elementos = lista_cria();
        lista_t*lista_elementos = cartela[i].elementos;
        if(cartela[i].id == NULL||lista_elementos == NULL) return 1;

        printf("Cartela %d:", i);
        printf("\n\tEntre com o id: ");
        fgets(cartela[i].id, 64, stdin);
        cartela[i].id[strlen(cartela[i].id)-1] = 0;

        for(int j = 0, elemento; j < numero_elementos; j++) {
            printf("\tElemento %d: ", j);
            scanf("%d", &elemento);
            lista_adiciona(lista_elementos, elemento);
        }

        fflush(stdin);
    }

    printf("\n\nSuas cartelas:\n");
    for(int i = 0; i < numero_cartelas; i++) {
        lista_t*lista_elementos = cartela[i].elementos;
        printf("%d.Cartela %s: [", i, cartela[i].id);
        for(int j = 0; j < numero_elementos; j++) {
            printf("%d",lista_elementos->elementos[j]);
            if(j != numero_elementos - 1) printf(", ");
        }
        printf("]\n");
    }

    return 0;
}