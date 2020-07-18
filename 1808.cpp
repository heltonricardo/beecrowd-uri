#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

short cpn(char c) {
   return c - 48;
}

int main(void)
{
   int i, qnt = 0;
   double soma = 0;
   char notas[101];

   cin >> notas;

   for (i = 0; i < strlen(notas); ++i) {
      if (notas[i] == '1' and notas[i+1] == '0') {
         soma += 10;
         ++i;
      }
      else soma += cpn(notas[i]);
      ++qnt;
   }

   cout << fixed << setprecision(2);
   cout << soma/qnt << endl;

   return 0;
}

