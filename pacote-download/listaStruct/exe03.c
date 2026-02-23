#include <stdio.h>
#include <string.h>

struct NIP{
    char nome[40];
    int idade;
    float peso;
};

int main(){
    typedef struct NIP Nip;
    Nip p[7];
    int maior = 0;
    float maiorpeso = 0.0f;

    char nomevelho[40];
    char nomepeso[40];

    for (int i = 0; i < 7; i++){
        printf("nome: \n");
        fgets(p[i].nome, 40, stdin);

        printf("idade: \n");
        scanf("%d", &p[i].idade);

        printf("peso: \n");
        scanf("%f", &p[i].peso);

        getchar(); // obrigatório para fgets funcionar depois do scanf

        if (p[i].idade > maior){
            maior = p[i].idade;
            strcpy(nomevelho, p[i].nome);//copiando uma string para a variavel
        }

        if (p[i].peso > maiorpeso){
            maiorpeso = p[i].peso;      
            strcpy(nomepeso, p[i].nome);//copiando uma string para a variavel
        }
    }

    printf("o mais velho eh %s", nomevelho);
    printf("o mais obeso eh %s", nomepeso);

    return 0;
}
