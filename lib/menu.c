#include "menu.h"
#include <stdio.h>
#include <string.h>

static void desenha_titulo(char*titulo, int n_opcoes, int tamanho_titulo) {
    //Título
    for(int i = 0; i < 3*tamanho_titulo; i++) printf("=");
    printf("\n");
    for(int i = 0; i < tamanho_titulo; i++) printf(" ");
    printf("%s\n", titulo);
    for(int i = 0; i < 3*tamanho_titulo; i++) printf("=");
    printf("\n");

}

int menu_opcoes(char*titulo, int n_opcoes, char**nome_opcoes) {
    /*
     * Estilo do menu:
     * ==============
     *     Título
     * ==============
     * |0 - Opcao 0 |
     * |1 - Opcao 1 |
     * |2 - Opcao 2 |
     */
    int tamanho_titulo = strlen(titulo), opcao_user;

    desenha_titulo(titulo, n_opcoes, tamanho_titulo);

    // Opções
    for(int i = 0; i < n_opcoes; i++) {
        printf("|%d - %s", i, nome_opcoes[i]);
        int espacos = 3*tamanho_titulo - (strlen(nome_opcoes[i]) + 6);
        if(espacos < 0) espacos = 0;
        for(int j = 0; j < espacos; j++) printf(" ");
        printf("|\n");
    }

    printf("Insira uma opcao:");
    scanf("%d",&opcao_user);
    for(int i = 0; i < 3*tamanho_titulo; i++) printf("=");
    printf("\n");

    fflush(stdin);
    return opcao_user;
}

int menu_input(char*titulo, int n_opcoes, char**nome_opcoes, char**respostas, int tamanho_max) {
    /*
     * Estilo do menu:
     * ==============
     *     Título
     * ==============
     * |Opcao 0: (input)
     * |Opcao 1: (input)
     */

    int tamanho_titulo = strlen(titulo), campos_vazios = 0;

    //Título
    desenha_titulo(titulo, n_opcoes, tamanho_titulo);

    // input's
    for(int i = 0; i < n_opcoes; i++) {
        printf("|%s", nome_opcoes[i]);
        fgets(respostas[i], tamanho_max, stdin);
        if(strlen(respostas[i]) < 2) campos_vazios++;
    }

    for(int i = 0; i < 3*tamanho_titulo; i++) printf("=");
    printf("\n");

    fflush(stdin);
    return campos_vazios;
}