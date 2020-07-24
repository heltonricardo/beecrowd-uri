#include <iostream>

using namespace std;

int main(void) {
   short i, j, k, n, t;
   short xi, xf, yi, yf;
   short m[100][100] = {};

   cin >> n;
   for (k = 0; k < n; ++k) {
      cin >> xi >> xf >> yi >> yf;
      for (i = xi; i < xf; ++i)
         for (j = yi; j < yf; ++j)
            m[i][j] = 1;
   }
   t = 0;
   for (i = 0; i < 100; ++i)
      for (j = 0; j < 100; ++j)
         if (m[i][j] == 1) ++t;

   cout << t << endl;
   return 0;
}

