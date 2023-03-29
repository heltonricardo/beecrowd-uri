#include <stdio.h>
#include <string.h>

int cpn(char c)
{
    switch (c)
    {
        case '1':
            return 1;
        case '2':
            return 2;
        case '3':
            return 3;
        case '4':
            return 4;
        case '5':
            return 5;
        case '6':
            return 6;
        case '7':
            return 7;
        case '8':
            return 8;
        case '9':
            return 9;
    }
}

int main(void)
{
    int i = 0, qnt = 0, soma = 0;
    char notas[101];

    scanf("%s", notas);

    for (i = 0; i < strlen(notas); ++i)
    {
        if (notas[i] == '1' && notas[i + 1] == '0')
        {
            soma += 10;
            ++i;
        }

        else
            soma += cpn(notas[i]);

        qnt++;
    }

    printf("%.2lf\n", (double)(soma / (double)(qnt * 1.0)));

    return 0;
}

