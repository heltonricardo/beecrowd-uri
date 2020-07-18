#include <iostream>

using namespace std;

bool tem(int n, int *p, int e) {
   int i;
   for (i = 0; i < e; ++i)
      if (n == p[i])
         return true;
   return false;
}

int main(void) {
   int i, n, q, e, *p;

   cin >> q >> e;
   p = (int *) realloc(p, e * sizeof(int));

   for (i = 0; i < e; ++i)
      cin >> p[i];

   for (i = 0; i < q; ++i) {
      cin >> n;
      if (tem(n, p, e)) cout << 0;
      else {
         cout << 1;
         ++e;
         p = (int *) realloc(p, e * sizeof(int));
         p[e-1] = n;
      }
      cout << endl;
   }
   delete [] p;
   return 0;
}

