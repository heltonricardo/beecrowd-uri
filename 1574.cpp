#include <iostream>

using namespace std;

int hatoi(const char *str)
{
   int val = 0;
   while (*str) {
      if ('0' <= *str and *str <= '9')
         val = val*10 + (*str - '0');
      ++str;
   }
   return val;
}

int sum(int *vet, int t) {
   int i, s = 0;
   for (i = 0; i < t; ++i) s += vet[i];
   return s;
}

int main(void) {
   int q, i, j, k, v;
   char e[15];

   cin >> q;
   cin.ignore(80, '\n');
   for (k = 0; k < q; ++k) {
      cin >> v;
      cin.ignore(80, '\n');
      int vet[v];
      for (j = 0; j < v; ++j) {
         cin.getline(e, sizeof(e));
         if (e[0] == 'L') vet[j] = -1;
         else if (e[0] == 'R') vet[j] = 1;
         else vet[j] = vet[hatoi(e)-1];
      }
      cout << sum(vet, v) << endl;
   }
   return 0;
}

