  long double n, t, s = 0, x;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> x;
    t = 1/x;
    s += t;
  }
  cout << n/s;
//Media armonica a n numere