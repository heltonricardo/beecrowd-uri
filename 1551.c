#include <stdio.h>
#include <string.h>

int conta(char *c) {
    int i, j, q = 0;
    char abc[] = "qwertyuiopasdfghjklzxcvbnm";
    for (i = 0; i < 26; ++i)
        for (j = 0; j < strlen(c); ++j)
            if (abc[i] == c[j]) {
                ++q;
                break;
            }
    return q;
}

int main(void) {
    int n, i, q;
    char f[1001];

    scanf("%d", &n); while (getchar() != '\n');
    for (i = 0; i < n; ++i) {
        scanf("%[^\n]s", f); while(getchar() != '\n');
        q = conta(f);
        if (q == 26) printf("frase completa\n");
        else if (q >= 13) printf("frase quase completa\n");
        else printf("frase mal elaborada\n");
    }
    return 0;
}


