int cifrePare(int n)
{
  int put = 1, cn = n, nr = 0, a[11];
  while (n)
  {
    int c = n % 10;
    if (c % 2 == 0)
    {
      a[put] = c;
      put++;
    }
    n /= 10;
  }
  put--;
  for (int i = put; i >= 1; --i)
  {
    if (a[i] % 2 == 0)
    {
      nr = nr * 10 + a[i];
    }
  }
  if (nr == 0 || nr == cn)
  {
    return -1;
  }
  return nr;
}

//Creeaza un nr nou din cifrele pare ale lui n (elimina cifrele impare), daca nr ul este nu contine cifre impare sau
//toate sunt impare atunci se returneaza -1

/*
OBS:
nrNou = nrNou * 10 + n % 10; va rezulta numarul cu cifrele lui n de la DREAPTA la STANGA
nrNou = n % 10 * put + nrNou; va rezulta numarul cu cifrele lui n de la STANGA la DREAPTA
put *= 10
put = 1 initial
*/
