#include <iostream>
#include <iomanip>
#include <string>
#include <map>

using namespace std;

int main(void) {
   int q, n, i, j, u;
   double v, t;
   string s;
   map<string, double> dispo;
   cout << fixed << setprecision(2);
   cin >> q;
   for (i = 0; i < q; ++i) {
      t = 0.0;
      cin >> n;
      for (j = 0; j < n; ++j) {
         cin >> s >> v;
         dispo.insert(make_pair(s, v));
      }
      cin >> n;
      for (j = 0; j < n; ++j) {
         cin >> s >> u;
         t += double(u * dispo[s]);
      }
      cout << "R$ " << t << endl;
      dispo.clear();
   }
   return 0;
}

