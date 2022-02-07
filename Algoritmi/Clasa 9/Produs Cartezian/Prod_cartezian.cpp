#include <iostream>

using namespace std;

int main()
{ 
  int n, m, a[100], b[100];
  cin >> n >> m;
  for (int i = 1; i <= n; ++i)
  {
    cin >> a[i];
  }
  for (int i = 1; i <= m; ++i)
  {
    cin >> b[i];
  }
  cout << "A x B = {";
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      if (j == m)
      {
        cout << "(" << a[i] << "," << b[j] << ")";
      }
      else
      {
        cout << "(" << a[i] << "," << b[j] << "),";
      }
    }
  }
  cout << "}";
  return 0;
}
//Se dau 2 numere n, m. Pentru multimile A={x1,x2,...,xn} si B={y1,y2,...,xm} sa se afiseze A x B