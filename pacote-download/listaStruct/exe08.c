#include <stdio.h>

void elementos(int *p){
    int i = 0;
    while (i < 10){ 
        printf("%d \n", *p);
        p++;
        i++;
    }
}

int main(void){
    int result;
    int pulo[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    elementos(pulo); 

    return 0;
}