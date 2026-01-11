#include <stdio.h>
int main () {

    int idade;
    float renda;

    printf("Qual sua idade? \n");
    scanf("%d", &idade);
    printf("Qual a sua renda mensal? \n");
    scanf("%f", &renda);

    if (idade >= 60 || idade <= 18) {
        if(renda <= 2000) {
            printf("Você se qualifica para o desconto \n");
        } else {
            printf("Você não se qualifica para o desconto, devido à sua renda \n");
        }
    } else { 
        printf("você não se qualifica para o desconto devido à sua idade");
    }
}
