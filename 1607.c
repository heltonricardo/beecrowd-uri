#include <stdio.h>
#include <string.h>

char dif(char a, char b) {
   if (a <= b) return b - a;
   else return 26 - a + b;
}

int main(void) {
   int n, i, t, j, q;
   char a[10001], b[10001];

   scanf("%d", &n);
   for (j = 0; j < n; ++j) {
      scanf("%s %s", &a, &b);
      while (getchar() != '\n');

      q = 0;
      t = strlen(a);
      for (i = 0; i < t; ++i)
         q += dif(a[i], b[i]);
      printf("%d\n", q);
   }
   return 0;
}

