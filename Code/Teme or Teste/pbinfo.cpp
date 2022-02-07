/*
  Lefter Sergiu - 07/02/20222
*/
#include <fstream>
#include <bitset>

using namespace std;

ifstream cin("logic.in");
ofstream cout("logic.out");

const int N = 256, NL = 26;

char a1[N], a2[N];
int poz[NL];
bool val[NL];

bool expresie(char*, int&);
bool termen(char*, int&);
bool factor_xor(char*, int&);
bool factor_and(char*, int&);

bool expresie(char *a, int &p)
{
  bool sau = termen(a, p);
  while (a[p] == '|')
  {
    p++;
    sau = (termen(a, p) || sau);
  }
  return sau;
}

bool termen(char *a, int &p)
{
  bool xorr = factor_xor(a, p);
  while (a[p] == '^')
  {
    p++;
    if (factor_xor(a, p) == xorr)
    {
      xorr = false;
    }
    else
    {
      xorr = true;
    }
  }
  return xorr;
}

bool factor_xor(char *a, int &p)
{
  bool shi = factor_and(a, p);
  while (a[p] == '&')
  {
    p++;
    shi = (factor_and(a, p) && shi);
  }
  return shi;
}

bool factor_and(char *a, int &p)
{
  bool rez, semn = true;
  while (a[p] == '~')
  {
    p++;
    semn = (!semn);
  }
  if (a[p] == '(')
  {
    p++;
    rez = expresie(a, p);
    p++;
    if (!semn)
    {
      rez = (!rez);
    }
    return rez;
  }
  //a[p] litera => trebuie sa iau in considerare val asociata variabilei cu acea litera
  int poz_n = poz[a[p++] - 'a'];
  rez = val[poz_n];
  if (!semn)
  {
    rez = (!rez);
  }
  return rez;
}

bitset <NL> variabile(char *a)
{
  bitset <NL> c;
  for (int i = 0; a[i] != '\0'; ++i)
  {
    if (a[i] >= 'a' && a[i] <= 'z')
    {
      c[a[i] - 'a'] = 1;
    }
  }
  return c;
}
bool verif_expresii(char *a1, char *a2)
{
  bitset <NL> c1 = variabile(a1);
  bitset <NL> c2 = variabile(a2);
  int n = 0; //nr ul de variabile din cele 2 expresii
  for (int i = 0; i < NL; ++i)
  {
    if (c1[i] != c2[i]) //a i-a litera nu apare in ambele epresii
    {
      return false;
    }
    if (c1[i])
    {
      poz[i] = n++;
    }
  }
  for (int i = 0; i < (1 << n); ++i) //i codifica o submultime de variabile cu val true
  {
    //initializare
    for (int j = 0; j < NL; ++j)
    {
      val[j] = false;
    }
    //construire
    for (int j = 0; j < n; ++j)
    {
      if (i & (1 << j))
      {
        val[j] = true;
      }
    }
    int p1 = 0, p2 = 0;
    if (expresie(a1, p1) != expresie(a2, p2))
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i)
  {
    cin >> a1 >> a2;
    if (verif_expresii(a1, a2))
    {
      cout << "egale" << '\n';
    }
    else
    {
      cout << "diferite" << '\n';
    }
  }
  cin.close();
  cout.close();
  return 0;
}