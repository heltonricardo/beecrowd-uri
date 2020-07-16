#include <iostream>

using namespace std;

int main(void) {
   int n, m, k = 0, e, i, j;
   bool z;

   cin >> n >> m;
   for (i = 0; i < n; ++i) {
         z = false;
      for (j = 0; j < m; ++j) {
         cin >> e;
         if (!e) z = true;
      }
      if (!z) ++k;
   }
   cout << k << endl;
   return 0;
}
