#include <stdio.h>

int hatoi(char *str)
{
   int val = 0;
   while (*str) {
      if ('0' <= *str && *str <= '9')
         val = val*10 + (*str - '0');
      ++str;
   }
   return val;
}

int sum(int *vet, int t) {
   int i, s = 0;
   for (i = 0; i < t; ++i) s += vet[i];
   return s;
}

int main(void) {
   int q, i, j, k, v;
   char e[15];

   scanf("%d", &q);
   while (getchar() != '\n');
   for (k = 0; k < q; ++k) {
      scanf("%d", &v);
      while (getchar() != '\n');
      int vet[v];
      for (j = 0; j < v; ++j) {
         scanf("%[^\n]s", e);
         while (getchar() != '\n');
         if (e[0] == 'L') vet[j] = -1;
         else if (e[0] == 'R') vet[j] = 1;
         else vet[j] = vet[hatoi(e)-1];
      }
      printf("%d\n", sum(vet, v));
   }
   return 0;
}


