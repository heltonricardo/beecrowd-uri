#include <stdio.h>

int main(void)
{
    char mapa[105][105], ant;
    int x = 0, y = 0, i = 0, j = 0;
    int bau = 0;

    scanf("%d %d", &x, &y);
    for (i = 0; i < y; ++i)
    {
        fflush(stdin);
        scanf("%s", mapa[i]);

        /*for (j = 0; j < x; ++j)
            scanf("%c", &mapa[i][j]);*/
    }

    i = 0; j = 0;
    while (mapa[0][0] != '.')
    {
        if (mapa[i][j] == 'x') break;
        else if (mapa[i][j] == '*') { bau = 1; break; }
        else if (i >= y || i < 0 || j >= x || j < 0) break;
        else if (mapa[i][j] == '^') { ant = mapa[i][j]; mapa[i][j] = 'x'; i--; }
        else if (mapa[i][j] == '>') { ant = mapa[i][j]; mapa[i][j] = 'x'; j++; }
        else if (mapa[i][j] == 'v') { ant = mapa[i][j]; mapa[i][j] = 'x'; i++; }
        else if (mapa[i][j] == '<') { ant = mapa[i][j]; mapa[i][j] = 'x'; j--; }
        else if (mapa[i][j] == '.') {
                 if (ant == '^') { mapa[i][j] = 'x'; i--; }
            else if (ant == '>') { mapa[i][j] = 'x'; j++; }
            else if (ant == 'v') { mapa[i][j] = 'x'; i++; }
            else if (ant == '<') { mapa[i][j] = 'x'; j--; }
        }

    }
    printf("%c\n", bau ? '*' : '!');
    return 0;
}

