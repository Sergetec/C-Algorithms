int nrdiv(int n)
{
  int cnt = 0;
  for (int i = 1; i * i <= n; ++i)
  {
    if (n % i == 0)
    {
      if (n / i == i)
      {
        cnt++;
      }
      else
      {
        cnt += 2;
      }
    }
  }
  return cnt;
}