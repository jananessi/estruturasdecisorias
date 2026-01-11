#include <stdio.h>
int main() {
    int idade;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    if (idade <= 12)
    printf("Você é uma criança");
    else if (idade <= 18)
    printf("Você é um adolescente");
    else if (idade <= 65)
    printf("Você é um adulto");
    else
    printf("Você é um idoso");
}
