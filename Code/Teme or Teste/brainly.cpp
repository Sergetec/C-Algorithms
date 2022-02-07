#include <iostream>

using namespace std;

int main()
{
  int n, grupa = 1;
  bool gasit = false;
  cin >> n;
  for (int i = 1; i; ++i)
  {
    for (int j = 1; j <= i; ++j)
    {
      if (j == n)
      {
        gasit = true;
        break;
      }
      else
      {
        continue;
      }
    }
    if (gasit)
    {
      break;
    }
    grupa++;
  }
  cout << grupa;
  return 0;
}
