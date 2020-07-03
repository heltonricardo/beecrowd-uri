#include <stdio.h>
#include <stdlib.h>

int main(void) {
   int n, m, s, lin, col, pi, pj, fig, h, vi, vj;
   short proc;
   char mp[101][101];
   char it[50001];

   while (scanf("%d %d %d", &n, &m, &s) == 3 && n+m+s) {
      while (getchar() != '\n');
      proc = 1;
      for (lin = 0; lin < n; ++lin) {
         for (col = 0; col < m; ++col) {
            scanf("%c", &mp[lin][col]);

            if (proc && mp[lin][col] == 'N' || mp[lin][col] == 'S' || mp[lin][col] == 'L' || mp[lin][col] == 'O') {
               pi = lin; pj = col; proc = 0;
            }
         }
         while (getchar() != '\n');
      }
      scanf("%s", &it);
      fig = 0;
      for (h = 0; h < s; ++h) {
         if (it[h] == 'D' && mp[pi][pj] == 'N') mp[pi][pj] = 'L';
         else if (it[h] == 'D' && mp[pi][pj] == 'L') mp[pi][pj] = 'S';
         else if (it[h] == 'D' && mp[pi][pj] == 'S') mp[pi][pj] = 'O';
         else if (it[h] == 'D' && mp[pi][pj] == 'O') mp[pi][pj] = 'N';
         else if (it[h] == 'E' && mp[pi][pj] == 'N') mp[pi][pj] = 'O';
         else if (it[h] == 'E' && mp[pi][pj] == 'O') mp[pi][pj] = 'S';
         else if (it[h] == 'E' && mp[pi][pj] == 'S') mp[pi][pj] = 'L';
         else if (it[h] == 'E' && mp[pi][pj] == 'L') mp[pi][pj] = 'N';
         else {
            if (mp[pi][pj] == 'N') { vi = pi-1; vj = pj; }
            else if (mp[pi][pj] == 'O') { vi = pi; vj = pj-1; }
            else if (mp[pi][pj] == 'S') { vi = pi+1; vj = pj; }
            else if (mp[pi][pj] == 'L') { vi = pi; vj = pj+1; }
            if (0 <= vi && vi < n && 0 <= vj && vj < m && mp[vi][vj] != '#') {
               if (mp[vi][vj] == '*') ++fig;
               mp[vi][vj] = mp[pi][pj];
               mp[pi][pj] = '.';
               pi = vi; pj = vj;
            }
         }
      }
      printf("%d\n", fig);
   }
   return 0;
}

