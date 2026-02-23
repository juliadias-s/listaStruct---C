#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    char endereco[100];
    char cidade[40];
    char cep[15];
    char email[50];
    int dia, mes, ano;
};

int main() {

    struct Pessoa p;
    int dadosCorretos = 1;

    printf("Digite o nome: ");
    fgets(p.nome, 50, stdin);

    printf("Digite o endereco: ");
    fgets(p.endereco, 100, stdin);

    printf("Digite a cidade: ");
    fgets(p.cidade, 40, stdin);

    printf("Digite a data de nascimento (dia mes ano): ");
    scanf("%d %d %d", &p.dia, &p.mes, &p.ano);

    printf("Digite o CEP: ");
    scanf("%s", p.cep);

    printf("Digite o email: ");
    scanf("%s", p.email);

    // -------------------------
    // VALIDACAO DA DATA
    // -------------------------

    int dataValida = 1;

    if (p.ano < 1900 || p.ano > 2025) {
        dataValida = 0;
    }

    if (p.mes < 1 || p.mes > 12) {
        dataValida = 0;
    }

    if (p.dia < 1 || p.dia > 31) {
        dataValida = 0;
    }

    if (dataValida == 0) {
        printf("\nData de nascimento invalida.\n");
        dadosCorretos = 0;
    }

    // -------------------------
    // VALIDACAO DO CEP (somente numeros)
    // -------------------------

    int cepValido = 1;

    for (int i = 0; p.cep[i] != '\0'; i++) {
        if (p.cep[i] < '0' || p.cep[i] > '9') {
            cepValido = 0;
        }
    }

    if (cepValido == 0) {
        printf("\nCEP invalido. Deve conter apenas numeros.\n");
        dadosCorretos = 0;
    }

    // -------------------------
    // VALIDACAO DO EMAIL
    // -------------------------

    int temArroba = 0;
    int temPontoDepois = 0;

    for (int i = 0; p.email[i] != '\0'; i++) {

        if (p.email[i] == '@') {
            temArroba = 1;
        }

        // Só considera ponto depois da arroba
        if (temArroba == 1 && p.email[i] == '.') {
            temPontoDepois = 1;
        }
    }

    // AQUI retiramos o ! completamente
    if (temArroba == 0 || temPontoDepois == 0) {
        printf("\nEmail invalido.\n");
        dadosCorretos = 0;
    }

    // -------------------------
    // RESULTADO FINAL
    // -------------------------

    if (dadosCorretos == 1) {
        printf("\nTodos os dados estao corretos!\n");
    } else {
        printf("\nHa informacoes incorretas.\n");
    }

    return 0;
}
