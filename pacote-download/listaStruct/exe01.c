#include <stdio.h>

struct Ponto{
    int x;
    int y;
};

int main(){
    struct Ponto p;
    struct Ponto v1;
    struct Ponto v2;

    printf("x: \n");
    scanf("%d", &p.x);
    printf("y: \n");
    scanf("%d", &p.y);
    printf("x de v1: \n");
    scanf("%d", &v1.x);
    printf("y de v1: \n");
    scanf("%d", &v1.y);
    printf("x de v2: \n");
    scanf("%d", &v2.x);
    printf("y de v2: \n");
    scanf("%d", &v2.y);

    if (v1.x <= p.x && p.x <= v2.x && v1.y <= p.y && p.y <= v2.y){
        printf("o ponto esta incluso nos vertices do retangulo \n");
    }
    else{
        printf("o ponto nao esta incluso nos vertices do retangulo \n");
    }
    

    return 0;
}