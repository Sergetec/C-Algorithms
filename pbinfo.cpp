/*
  Lefter Sergiu - 08/06/2022
  Josephus problem
*/
#include <iostream>

using namespace std;

struct nod
{
  int info;
  nod *urm;
};

int main()
{
  int n, k;
  cin >> n >> k;
  nod *p, *q, *r;
  //Creating list
  p = new nod;
  p->info = 1;
  p->urm = NULL;
  q = p;
  for (int i = 2; i <= n; ++i)
  {
    r = new nod;
    r->info = i;
    r->urm = NULL;
    q->urm = r;
    q = r;
  }
  q->urm = p;
  q = p;
  while (q->urm != q)
  {
    for (int i = 1; i <= k; ++i)
    {
      r = q->urm;
      q->urm = r->urm;
      delete r;
      q = q->urm;
    }
  }
  cout << q->info;
  return 0;
}