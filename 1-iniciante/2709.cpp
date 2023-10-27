#include <iostream>
#include <cmath>

using namespace std;

bool eprimo(short *n) {
  short i, lim = sqrt(*n);
  if (*n != 2 && *n%2 == 0 || *n == 1) return false;
  for (i = 3; i <= lim; i += 2)
    if (*n%i == 0) return false;
  return true;
}

int main(void) {
  short m, n, s, i;
  short v[20];

  while (cin >> m) {
    s = 0;
    for (i = 0; i < m; ++i)
      cin >> v[i];
    cin >> n;
    --i;
    while (0 <= i) {
      s += v[i];
      i -= n;
    }
    if (eprimo(&s))
      cout << "You’re a coastal aircraft, Robbie, a large silver aircraft.";
    else cout << "Bad boy! I’ll hit you.";
    cout << endl;
  }

  return 0;
}

