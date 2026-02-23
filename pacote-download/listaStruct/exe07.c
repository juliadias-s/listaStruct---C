#include <stdio.h>

int main(void){

    int i = 10;
    int *ip;
    float f = 12.0;
    float *fp;
    char a = 'B';
    char *ap;

    ip = &i;
    printf("i: %d \n", i);
    *ip = i + 1; printf("ponteiro i: %d \n", i);
    fp = &f;
    printf("f: %.2f \n", f);
    *fp = f + 1; printf("ponteiro de f: %.2f \n", f);
    ap = &a;
    printf("a: %c \n", a);
    *ap = 'A'; printf("ponteiro de a: %c \n", a);
    return 0;
}