#include <stdio.h>

int main(void){

    int a;
    int *b;
    int **c;
    int ***d;

    printf("digite um valor para a : "); scanf("%d", &a);
    b = &a;
    printf("dobro: %d\n", *b * 2);
    c = &b;
    printf("tiplo: %d \n", **c * 3);
    d = &c;
    printf("quadruplo: %d \n", ***d * 4);
    return 0;
}

// proprio endereco do ponteiro = printf("&p3 = %p \n", &p3);
// o endereco da variavel que o ponteiro = printf("p3 = %p \n", p3);
// int main(){
    //int *p3;
    //int **p4;
    //int y = 100;
    //p3 = &y;
    //p4 = &p3;
    //printf("*p4: %p \n", *p4); #endereco que p3 aponta no caso o de x
    //printf("**p4: %d \n", **p4); # o valor de x
//}