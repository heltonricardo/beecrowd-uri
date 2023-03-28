#include <stdio.h>
#include <stdlib.h>

int main(void) {
   short n, m, i, j, c, s;

   scanf("%hd", &n);
   for (j = 0; j < n; ++j) {
      scanf("%hd", &m);
      while (getchar() != '\n');
      c = 0;
      for (i = 0; i < m; ++i) {
         scanf("%c", &s);
         if (s != i+65)
            ++c;
      }
      printf((c == 2) ?
             "There are the chance.\n" :
             "There aren't the chance.\n");
   }

   return 0;
}

