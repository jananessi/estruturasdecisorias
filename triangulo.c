#include <stdio.h>
int main() {
    int ladoa, ladob, ladoc;
    printf("lado A: \n");
    scanf("%d", &ladoa);
    printf("lado B: \n");
    scanf("%d", &ladob);
    printf("lado C: \n");
    scanf("%d", &ladoc);

    if(ladoa == ladob && ladoa == ladoc)
        printf("Caso 1");
    else
        if (ladoa == ladob || ladob == ladoc || ladoc == ladoa)
            printf("Caso 2");
        else
            printf("Caso 3");

}
