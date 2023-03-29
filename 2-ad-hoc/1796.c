#include <stdio.h>

int main(void) {
   int n, z = 0, u = 0, i, x;

   scanf("%d", &n);

   for (i = 0; i < n; ++i) {
      scanf("%d", &x);
      if (x) ++u;
      else ++z;
   }

   if (z > u) printf("Y");
   else printf("N");
   printf("\n");

   return 0;
}

