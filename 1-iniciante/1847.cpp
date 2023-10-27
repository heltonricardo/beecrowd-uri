#include <iostream>

using namespace std;

int m(int a) {
   return (a > 0) ? a : -a;
}

int main(void) {
   int a, b, c, face;
   cin >> a >> b >> c;
   face = (a > b and b <= c) ? 1 : face;
   face = (a < b and b >= c) ? 0 : face;
   face = (a < b and b < c and m(c - b) <  m(b - a)) ? 0 : face;
   face = (a < b and b < c and m(c - b) >= m(b - a)) ? 1 : face;
   face = (a > b and b > c and m(c - b) <  m(b - a)) ? 1 : face;
   face = (a > b and b > c and m(c - b) >= m(b - a)) ? 0 : face;
   if (a == b)
      if (b < c) face = 1;
      else face = 0;
   if (face) cout << ":)";
   else cout << ":(";
   cout << endl;
   return 0;
}

