#include <stdio.h>

int fib(int n, int *c) {
   ++(*c);
   if (n == 0 || n == 1) return n;
   return fib(n-1, c) + fib(n-2, c);
}

int main(void) {
   int n, q, i, c, f;

   scanf("%d", &q);
   for (i = 0; i < q; ++i) {
      scanf("%d", &n);
      c = -1;
      f = fib(n, &c);
      printf("fib(%d) = %d calls = %d\n", n, c, f);
   }
   return 0;
}


