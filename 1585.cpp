#include <iostream>

using namespace std;

int main(void) {
   int n, x, y, i;
   cin >> n;
   for (i = 0; i < n; ++i) {
      cin >> x >> y;
      cout << (int)(x * y / 2) << " cm2" << endl;
   }
   return 0;
}

