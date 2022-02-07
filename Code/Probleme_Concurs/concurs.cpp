#include <fstream>

using namespace std;

ifstream cin("buldo.in");
ofstream cout("buldo.out");

int main()
{
  int n, h = 100000000, ma;
  long long x, s = 0;
  cin >> n;
  for (int i = 1; i <= n; ++i)
  {
    cin >> x;
    s += x;
    ma = s / i;
    if (ma < h)
    {
      h = ma;
    }
  }
  cout << h;
  cin.close();
  cout.close();
  return 0;
}