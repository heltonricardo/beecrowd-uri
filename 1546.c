#include <stdio.h>

int main(void) {
    int q, p, r, s, n;

    scanf("%d", &q);
    for (p = 0; p < q; ++p) {
        scanf("%d", &r);
        for (s = 0; s < r; ++s) {
            scanf("%d", &n);
            switch (n) {
                case 1: printf("Rolien\n");   break;
                case 2: printf("Naej\n");     break;
                case 3: printf("Elehcim\n");  break;
                case 4: printf("Odranoel\n"); break;
            }
        }
    }
    return 0;
}


