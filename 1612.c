#include <stdio.h>
#include <math.h>

int main(void) {
   int n, q, i;

   scanf("%d", &q);
   for (i = 0; i < q; ++i) {
      scanf("%d", &n);
      printf("%d\n", (int)ceil(n/2.0));
   }

   return 0;
}


