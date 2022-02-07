/*
  Lefter Sergiu - 03/02/2022
*/
#include <iostream>

using namespace std;

const int N = 102;

int a[N][N];
int dl[4] = {0, 0, -1, 1};
int dc[4] = {-1, 1, 0, 0};

void fill(int l, int c, int litera)
{
  int lv, cv;
  a[l][c] = litera;
  for (int i = 0; i < 4; ++i)
  {
    lv = l + dl[i];
    cv = c + dc[i];
    if (a[lv][cv] == 1)
    {
      fill(lv, cv, 5 - litera);
    }
  }
}

int main()
{
  int n, m;
  cin >> n >> m;
  //CITIRE
  for (int i = 1; i <= n; ++i)
  {
    for (int j = 1; j <= m; ++j)
    {
      cin >> a[i][j];
    }
  }
  //REZOLVARE
  for (int i = 1; i <= n; ++i)
  {
    for (int j = 1; j <= m; ++j)
    {
      if (a[i][j] == 1)
      {
        fill(i, j, 2);
      }
    }
  }
  //AFISARE
  for (int i = 1; i <= n; ++i)
  {
    for (int j = 1; j <= m; ++j)
    {
      if (a[i][j] == 0) //apa
      {
        cout << "A ";
      }
      else if (a[i][j] == 2) //crocodil
      {
        cout << "C ";
      }
      else //elefant
      {
        cout << "E ";
      }
    }
    cout << '\n';
  }
  
  return 0;
}
