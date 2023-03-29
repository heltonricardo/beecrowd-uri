#include <stdio.h>

int rec(int v, int n) {
   if (v > n) return 0;
   if (v == n) return 1;
   return rec(v+2, n) + rec(v+3, n);
}

int main(void) {
   int n;
   scanf("%d", &n);
   printf("%d\n", rec(0, n));
   return 0;
}
