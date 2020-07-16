#include <iostream>

using namespace std;

int main(void) {
   int n, i, x, y;

   cin >> n;

   for (i = 0; i < n; ++i) {
      cin >> x >> y;
      cout << x + y << endl;
   }
   return 0;
}

