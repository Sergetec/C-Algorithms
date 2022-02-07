#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

string barcode(int zip)
{
  string rezultat;
  while (zip > 0)
  {
    rezultat += zip % 10 + '0';
    zip /= 10;
  }
  reverse(rezultat.begin(), rezultat.end());
  return rezultat;
}

int main()
{
  int x;
  cout << barcode(x);
  return 0;
}
