#include <stdio.h>
#include <stdlib.h>

int compara(int *x, int *y) {
   if (*x  > *y) return 1;
   else if (*x  < *y) return -1;
   return 0;
}

int aux(int *v, int m) {
   while (m+1 && v[m] == v[m-1]) --m;
   return m+1;
}

int busca(int *v, int t, int p) {
   int s = 0, e = t-1, m;
   while (s <= e) {
      m = (s + e) / 2;
      if (v[m] == p) return aux(v, m);
      else if (v[m] < p) s = m+1;
      else e = m-1;
   }
   return 0;
}

int main(void) {
   int n, q, i, p, r, c = 1;
   int *v;

   while (scanf("%d %d", &n, &q) == 2 && n+q) {
      printf("CASE# %d:\n", c++);
      v = (int *) malloc(n * sizeof(int));
      for (i = 0; i < n; ++i) scanf("%d", &v[i]);
      qsort(v, (size_t) n, sizeof(int), (void *) compara );
      for (i = 0; i < q; ++i) {
         scanf("%d", &p);
         r = busca(v, n, p);
         if (r) printf("%d found at %d\n", p, r);
         else printf("%d not found\n", p);
      }
      free(v);
   }
   return 0;
}

