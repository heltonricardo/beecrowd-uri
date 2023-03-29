#include <stdio.h>
#include <stdlib.h>

int tem(int n, int *p, int e) {
   int i;
   for (i = 0; i < e; ++i)
      if (n == p[i])
         return 1;
   return 0;
}

int main(void) {
   int i, n, q, e, *p;

   scanf("%d %d", &q, &e);
   p = (int *) realloc(p, e * sizeof(int));

   for (i = 0; i < e; ++i)
      scanf("%d", &p[i]);

   for (i = 0; i < q; ++i) {
      scanf("%d", &n);
      if (tem(n, p, e)) printf("0");
      else {
         printf("1");
         ++e;
         p = (int *) realloc(p, e * sizeof(int));
         p[e-1] = n;
      }
      printf("\n");
   }
   free(p);
   return 0;
}

