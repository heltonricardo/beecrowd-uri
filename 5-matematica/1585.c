#include <stdio.h>

int main(void) {
   int n, x, y, i;
   scanf("%d", &n);
   for (i = 0; i < n; ++i) {
      scanf("%d %d", &x, &y);
      printf("%d cm2\n", x*y/2);
   }
   return 0;
}


