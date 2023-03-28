#include <iostream>

using namespace std;

int main(void) {
   int i, n, x;

   cin >> n;
   for (i = 0; i < n; ++i) {
      cin >> x;
      if (x % 2) cout << 1;
      else cout << 0;
      cout << endl;
   }
   return 0;
}

