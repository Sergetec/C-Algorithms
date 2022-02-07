#include <iostream>
#include <bitset>

using namespace std;

const int N = 1e6 + 1;

bitset <N> c;

int main()
{
  int n;
  cin >> n;
  for (int i = 2; i * i <= n; i++)
  {
    if (c[i] == 0)
    {
      for (int j = i * i; j <= n; j += i)
      {
        c[j] = 1;
      }
    }
  }
  for (int i = 2; i <= n; i++)
  {
    if (c[i] == 0)
    {
      cout << i << " ";
    }
  }
 return 0;
}

//Afiseaza numerele prime de la 1 la n