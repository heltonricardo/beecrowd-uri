#include <stdio.h>
#include <stdlib.h>
#include <math.h>

short eprimo(int n) {
   int i;
   if (n == 2) return 1;
   if (n == 1 || n % 2 == 0) return 0;
   for (i = 3; i <= sqrt(n); i += 2)
      if (n % i == 0) return 0;
   return 1;
}

int prox(int n) {
   while (!eprimo(++n));
   return n;
}

int main(void) {
   int n, j, m, i, k, p;
   char *v = 0;

   while (scanf("%d", &n) == 1 && n) {
      v = (char *) malloc(n * sizeof(char));
      for (j = 0; j < n; ++j) v[j] = 1;
      m = p = i = 0;
      k = 2;
      while (m < n-1) {
         if (v[i] == 1) ++p;
         if (p == k) {
            v[i] = 0;
            ++m;
            p = 0;
            k = prox(k);
         }
         ++i;
         if (i == n) i = 0;
     }
     for (j = 0; v[j] == 0; ++j);
     printf("%d\n", j+1);
   }
   free(v);
   return 0;
}

