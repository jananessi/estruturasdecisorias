#include <stdio.h>
int main() {
    int idadevoto = 16;
    int idade;
    printf("digite a idade: ");
    scanf("%d", &idade);
    if (idade >= idadevoto)
        printf("Pode votar");
    else
        printf("Não pode votar ainda");
}    
