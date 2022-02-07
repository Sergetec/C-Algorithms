  int n;
  cin >> n;
  int d = 2;
  while (d * d <= n)
  {
    if (n % d == 0)
    {
      int p = 0;
      while (n % d == 0)
      {
        n /= d;
        p++;
        cout << d << ' ';
      }
    }
    d++;
  }
  if (n != 1)
  {
    cout << n;
  }