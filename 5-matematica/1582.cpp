#include <iostream>

using namespace std;

int mdc(int x, int y, int z) {
   int mdc = x;
   while (x % mdc != 0 or y % mdc != 0 or z % mdc != 0)
      mdc -= 1;
   return mdc;
}

int main(void) {
   int a, b, c;

   while (cin >> a >> b >> c) {
      if (a*a==b*b+c*c or b*b==a*a+c*c or c*c==b*b+a*a)
        if (mdc(a, b, c) == 1) cout << "tripla pitagorica primitiva" << endl;
        else cout << "tripla pitagorica" << endl;
      else cout << "tripla" << endl;
   }
   return 0;
}
