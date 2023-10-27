#include <iostream>

using namespace std;

int main(void) {
   int n, i, m, x, d = 1;

   cin >> n >> m;
   for (i = 1; i < n; ++i) {
      cin >> x;
      if (x < m) {
         m = x;
         d = i+1;
      }
   }
   cout << d << endl;
   return 0;
}

