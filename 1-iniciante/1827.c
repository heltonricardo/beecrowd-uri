#include <stdio.h>

int main(void) {
   int n, e, d, i, j;

   while (scanf("%d", &n) == 1) {
      e = n / 3;
      d = n - e - 1;
      for (i = 0; i < n; ++i) {
         for (j = 0; j < n; ++j) {
            if (e <= i && i <= d && e <= j && j <= d)
               if (n % 2 != 0 && i == j && i == ((n - 1) / 2)) printf("4");
               else printf("1");
            else if (i == j) printf("2");
            else if (i+j == n-1) printf("3");
            else printf("0");
         }
         printf("\n");
      }
      printf("\n");
   }
   return 0;
}

