#include <stdio.h>

int main(void) {
    int A, B, C, N;

    while (scanf("%d", &A) && A != 0) {
        scanf("%d %d", &B, &C);
        N = (int)((A * B * C) / (C - A));
        if (N == 1) printf("1 pagina\n");
        else printf("%d paginas\n", N);
    }

    return 0;
}



