#include <iostream>
#include <cstring>

#define t 500

using namespace std;

int main(void) {
   int q, i, j, k;
   int x1, x2, y1, y2, v;
   char op;
   long m[t][t];

   memset(m, 0, sizeof(m));

   cin >> q;
   for (k = 0; k < q; ++k) {
      cin >> op;
      if (op == 'U') {
         cin >> x1 >> y1 >> x2 >> y2 >> v;
         for (i = x1 - 1; i < x2; ++i)
            for (j = y1 - 1; j < y2; ++j)
               m[i][j] += v;
      }
      else {
         cin >> x1 >> y1;
         cout << m[x1 - 1][y1 - 1] << endl;
      }
   }
   return 0;
}

