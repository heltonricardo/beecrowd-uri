#include <iostream>

using namespace std;

int ope(int *a, int *b) {
   int q = 0;
   for (i = 0; i)
}

int main(void) {
   int t, n, i, j, x, k, g;
   int *v[60];

   cin >> t;
   for (i = 0; i < t; ++i) {
      cin >> n;
      for (j = 0; j < n; ++j) {
         cin >> x;
         v[j] = (int *) malloc(n * sizeof(int));
         for (k = 0; k < x; ++k) {
            cin >> v[j][k];
         }
      }

      cin >> g;
      for (j = 0; j < g; ++j) {
         cin >> x >> k >> n;
         if (x == 1) cout << *v[k-1] << " " << *v[n-1];
         else cout << *v[k-1] << " " << *v[n-1];
         cout << endl;
      }
   }
   return 0;
}

