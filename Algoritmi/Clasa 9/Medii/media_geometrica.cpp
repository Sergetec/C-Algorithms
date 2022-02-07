  long long n, put = 1, x;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> x;
    put *= x;
  }
  double r = (double) 1/n;
  cout << pow(put, r);
//media geometrica a n numere