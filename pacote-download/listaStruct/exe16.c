#include <stdio.h>

void geramatriz(int (*p)[5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &p[i][j]);
        }
    }
}

void imprimematriz(int (*p)[5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
}


int maioremenor(int *p, int *maior, int *menor){
    *maior = *p; *menor = *p;

    for (int i = 0; i < 25; i++){
        if(*p > *maior){
            *maior = *p;
        }else if(*p < *menor){
            *menor = *p;
        }
        p++;
    }

}

int main(){
    int matriz[5][5];
    int maior, menor;
    
    geramatriz(matriz);

    imprimematriz(matriz);
 
    maioremenor(&matriz[0][0], &maior, &menor);

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
