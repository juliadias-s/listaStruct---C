#include <stdio.h>

void troca(int *a, int *b){
    int contr;
    contr = *a;
    a = b;
    b = &contr;
    printf("ponteiro a que aponta pra v1: %d \n", *a);
    printf("ponteiro b que aponta pra v2: %d \n", *b);
}

int main(void){
    int v1 = 2, v2 = 1;
    printf("v1: %d \n", v1);
    printf("v2: %d \n", v2);
    troca(&v1, &v2); 

    return 0;
}