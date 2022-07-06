int nrDiv(int n)
{
  int cnt = 1, d = 2, p = 0;
  while (n > 1)
  {
    p = 0;
    while (n % d == 0)
    {
      n /= d;
      p++;
    }
    if (p)
    {
      cnt *= (p + 1);
    }
    d++;
    if (d * d > n)
    {
      d = n;
    }
  }
  return cnt;
}