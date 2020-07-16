#include <iostream>

using namespace std;

int main(void) {
   int n, i;
   int ax, ay, bx, by, cx, cy, dx, dy, rx, ry;

   cin >> n;
   for (i = 0; i < n; ++i) {
      cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy >> rx >> ry;
      if (dy >= ry and cy >= ry and ay <= ry and by <= ry)
         if (dx <= rx and ax <= rx and cx >= rx and bx >= rx)
            cout << 1;
         else cout << 0;
      else cout << 0;
      cout << endl;
   }

   return 0;
}
