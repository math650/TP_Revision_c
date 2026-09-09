#include <stdio.h>

int main() {
    int tableau[2][10];
    int i = 0, j = 0;

    while (j < 10) {
        tableau[0][j] = j;
        tableau[1][j] = j * 3;
        j++;
    }

    printf("Tableau :\n");
    i = 0;
    while (i < 2) {
        j = 0;
        while (j < 10) {
            printf("%3d ", tableau[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}