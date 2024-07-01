//
// Created by Lucas on 25/06/2024.
//

#ifndef MENU_H
#define MENU_H

//Imprime um menu de opções
//- O nome das opções deve ser informado via um vetor de strings
//- Retorna a opção inserida pelo usuario
int menu_opcoes(char*titulo, int n_opcoes, char**nome_opcoes);

//Imprime um menu que recebe informações digitadas pelo usuário
//- O nome das opções deve ser informado via um vetor de strings
//- Os ponteiros responsáveis pelas strings também deve ser informado
//  via um vetor de strings, bem como o tamanho máx de cada uma
//- Retorna o numero de campos vazios
int menu_input(char*titulo, int n_opcoes, char**nome_opcoes, char**respostas, int tamanho_max);

#endif //MENU_H