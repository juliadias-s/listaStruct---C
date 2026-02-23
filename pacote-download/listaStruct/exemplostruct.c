#include <stdio.h>
#include <string.h>

struct FILME{
    char nome[50]; char duracao[20]; char genero[30]; 
    float valor; int ano;
};

int main(){
    struct FILME filme[10];

    for ( int i = 0; i < 10; i++){
        printf("nome: \n");
        fgets(filme[i].nome, 50, stdin);
        printf("duracao: \n");
        fgets(filme[i].duracao, 20, stdin);
        printf("genero: \n");
        fgets(filme[i].genero, 30, stdin);
        printf("valor: \n");
        scanf("%f", &filme[i].valor);
        getchar();
        printf("ano: \n");
        scanf("%d", &filme[i].ano);
        getchar();
    }

    for (int i = 0; i < 10; i++){
        printf("nome: %s", filme[i].nome);
        printf("ano: %d \n", filme[i].ano);
    }
    return 0;
}