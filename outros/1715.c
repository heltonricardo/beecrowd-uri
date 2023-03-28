#include <stdio.h>

#define true 1
#define false 0

int main(void) {
   int n, m, k = 0, e, i, j;
   int z;

   scanf("%d %d", &n, &m);
   for (i = 0; i < n; ++i) {
      z = false;
      for (j = 0; j < m; ++j) {
         scanf("%d", &e);
         if (!e) z = true;
      }
      if (!z) ++k;
   }
   printf("%d\n", k);
   return 0;
}

