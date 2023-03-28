#include <stdio.h>

int main(void) {
   int n, lim, i, j;

   while (scanf("%d", &n) == 1) {
      lim = n / 2;
      for (i = 1; i <= n; i+=2) {
         for (j = 0; j < lim; ++j) printf(" ");
         --lim;
         for (j = 0; j < i; ++j) printf("*");
         printf("\n");
      }
      lim = n / 2;
      for (j = 0; j < lim; ++j) printf(" ");
      printf("*\n");
      --lim;
      for (j = 0; j < lim; ++j) printf(" ");
      printf("***\n\n");
   }
   return 0;
}

