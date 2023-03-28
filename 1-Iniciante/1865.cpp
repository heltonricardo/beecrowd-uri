#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
   int n, i, x;
   char c[30];

   cin >> n;

   for (i = 0; i < n; ++i) {
      cin >> c >> x;
      if (!strcmp(c, "Thor")) cout << "Y";
      else cout << "N";
      cout << endl;
   }
   return 0;
}

