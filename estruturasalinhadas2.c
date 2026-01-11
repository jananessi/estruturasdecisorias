#include <stdio.h>
int main () {

    int num;

    printf("Digite um número: \n");
    scanf("%d", &num);

    if (num > 0) {
        printf("Esse número é positivo \n");
        if (num % 2 == 0) {
            printf("Número par \n");
        } else {
            printf("Número ímpar \n"); }
    } else if (num == 0) {
        printf("Número zero");
    
    } else {
        printf("Esse número é negativo");
    }
}
