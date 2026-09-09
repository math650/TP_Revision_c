#include <stdio.h>

int main() {
    int tableau[2][10];
    int i, j;

    for (i = 0; i < 10; i++) {
        tableau[0][i] = i;
    }

    for (i = 0; i < 10; i++) {
        tableau[1][i] = tableau[0][i] * 3;
    }

    printf("Tableau :\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 10; j++) {
            printf("%3d ", tableau[i][j]);
        }
        printf("\n");
    }

    return 0;
}