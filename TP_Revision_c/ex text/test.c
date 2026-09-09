#include <stdio.h>

int main() {
    int V;

    printf("Saisir un nombre entier : ");
    scanf("%d", &V);

    if (V >= 0) {
        printf("La valeur absolue est : %d\n", V);
    } else {
        printf("La valeur absolue est : %d\n", -V);
    }

    return 0;
}