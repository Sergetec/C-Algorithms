  long double n, s = 0, x;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> x;
    s += x * x;
  }
  cout << sqrt(s / n);
//media patratica a n numere