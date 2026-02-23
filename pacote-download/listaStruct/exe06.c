#include <stdio.h>

int negativos(float *p, int n){
    int neg = 0;
    for(int i = 0; i < n; i++){ //percorrer sete vezes para escrever no vetor
        printf("digite valores para o vetor:  \n");
        scanf("%f", p); //forma de escrever no vetor vet pelo ponteiro p
        if(*p < 0){ //ponteiro aponta pro valor atual
            neg ++;
        }
        p++; //percorre o vetor
    }
    return neg;
}

int main(void){
    int n;
    int result;

    printf("digite o tamanho: \n"); scanf("%d", &n);
    float vet[n]; //cria o vetor dps do tamanho ja ter sido definido//

    result = negativos(&vet, n); //chama a funcao somente com o endereco/nome vetor

    printf("a qntd de numeros negativos eh: %d", result);

    return 0;
}