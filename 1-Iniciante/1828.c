#include <stdio.h>
#include <string.h>

int main(void)
{
    int qnt = 0, i = 0, num = 0;
    char sheld[10], raj[10];

    scanf("%d", &qnt);

    for (i = 0; i < qnt; ++i)
    {
        scanf(" %s", sheld);
        scanf(" %s", raj);

        if (strcmp(sheld, raj) == 0)
            printf("Caso #%d: De novo!\n", i + 1);
        else if (strcmp(sheld, "tesoura") == 0 && (strcmp(raj, "papel") == 0 || strcmp(raj, "lagarto") == 0))
            printf("Caso #%d: Bazinga!\n", i + 1);
        else if (strcmp(sheld, "papel") == 0 && (strcmp(raj, "pedra") == 0 || strcmp(raj, "Spock") == 0))
            printf("Caso #%d: Bazinga!\n", i + 1);
        else if (strcmp(sheld, "pedra") == 0 && (strcmp(raj, "lagarto") == 0 || strcmp(raj, "tesoura") == 0))
            printf("Caso #%d: Bazinga!\n", i + 1);
        else if (strcmp(sheld, "lagarto") == 0 && (strcmp(raj, "Spock") == 0 || strcmp(raj, "papel") == 0))
            printf("Caso #%d: Bazinga!\n", i + 1);
        else if (strcmp(sheld, "Spock") == 0 && (strcmp(raj, "tesoura") == 0 || strcmp(raj, "pedra") == 0))
            printf("Caso #%d: Bazinga!\n", i + 1);
        else
            printf("Caso #%d: Raj trapaceou!\n", i + 1);
    }

    return 0;
}

