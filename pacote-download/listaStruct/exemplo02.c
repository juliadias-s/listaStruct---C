#include <stdio.h>

void criavetor(int *p){
    for (int i = 0; i < 4; i++){
        printf("digite um valor para o vetor: \n");
        scanf("%d", p); //digitando valores para o vetor
        p++;
    }

}

int main(){
    int vet[4];

    criavetor(vet);
    return 0;
}