#include <stdio.h>
int main() {
    float nota;

    printf("Digite a nota do aluno: \n");
    scanf("%f", &nota);

    if (nota >= 9)
    printf("O aluno tirou A");
    else if (nota >=8)
    printf("O aluno tirou B");
    else if(nota >= 7)
    printf("O aluno tirou C");
    else
    printf("O aluno tirou D");
}
