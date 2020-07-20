#include <stdio.h>

int fat(int n) {
   if (n <= 1) return 1;
   else return n * fat(n-1);
}

int main(void) {
   int n, i, c, t, f;
   scanf("%d", &n);
   c = 0;
   for (i = 8; i >= 0; --i) {
      f = fat(i);
      t = (int)(n / f);
      n -= t * f;
      c += t;
   }
   printf("%d\n", c);
   return 0;
}
