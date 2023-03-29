#include <iostream>

using namespace std;

int fib(int n, int *c) {
   ++(*c);
   if (n == 0 or n == 1) return n;
   return fib(n-1, c) + fib(n-2, c);
}

int main(void) {
   int n, q, i, c, f;

   cin >> q;
   for (i = 0; i < q; ++i) {
      cin >> n;
      c = -1;
      f = fib(n, &c);
      cout << "fib(" << n << ") = " << c << " calls = " << f << endl;
   }
   return 0;
}

