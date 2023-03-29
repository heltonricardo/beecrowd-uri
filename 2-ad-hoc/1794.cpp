#include <iostream>

using namespace std;

int main(void) {
   int n, la, lb;

   cin >> n;
   cin >> la >> lb;

   if (la <= n and n <= lb) {
      cin >> la >> lb;
      if (la <= n and n <= lb)
         cout << "possivel";
      else cout << "impossivel";
   }
   else {
      cin >> la >> lb;
      cout << "impossivel";
   }
   cout << endl;
   return 0;
}

