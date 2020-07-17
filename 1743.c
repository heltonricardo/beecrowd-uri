#include <stdio.h>

int main(void) {
   int a[5], b[5], i;
   int d = 1;

   for (i = 0; i < 5; ++i) scanf("%d", &a[i]);
   for (i = 0; i < 5; ++i) scanf("%d", &b[i]);

   for (i = 0; i < 5; ++i)
      if (!(a[i] ^ b[i])) {
         d = 0;
         break;
      }

   if (d) printf("Y\n");
   else printf("N\n");
   return 0;
}

