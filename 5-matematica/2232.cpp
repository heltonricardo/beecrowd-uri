#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
   int n, x, i;

   cin >> x;
   for (i = 0; i < x; ++i) {
      cin >> n;
      cout << long(pow(2, n) - 1) << endl;
   }
   return 0;
}

