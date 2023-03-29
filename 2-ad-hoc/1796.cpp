#include <iostream>

using namespace std;

int main(void) {
   int n, z = 0, u = 0, i, x;

   cin >> n;

   for (i = 0; i < n; ++i) {
      cin >> x;
      if (x) ++u;
      else ++z;
   }

   if (z > u) cout << "Y";
   else cout << "N";
   cout << endl;

   return 0;
}

