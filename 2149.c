#include <stdio.h>

int fibs(short n, int a, int b) {
   if (n)
      if (n % 2) return fibs(n-1, b, a+b);
      else return fibs(n-1, b, a*b);
   return a;
}

int main(void) {
   short n;

   while (scanf("%hd", &n) == 1)
      printf("%d\n", fibs(n, 1, 1));

   return 0;
}

