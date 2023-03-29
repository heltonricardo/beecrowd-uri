#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void) {
   int n, q, i;
   cout << fixed << setprecision(0);
   cin >> q;
   for (i = 0; i < q; ++i) {
      cin >> n;
      cout << ceil(n/2.0) << endl;
   }

   return 0;
}

