#include <stdio.h>

int main(void)
{
    int num = 0, nv = 0, qnt = 0;
    int i = 0;

    while (scanf("%d", &qnt) == 1)
        {
            nv = 1;
            for (i = 0; i < qnt; ++i)
            {
                scanf("%d", &num);
                if (num >= 10 && num < 20)
                {
                    if (nv != 3)
                        nv = 2;
                }
                else if (num >= 20)
                    nv = 3;
            }
            printf("%d\n", nv);

        }


    return 0;
}
