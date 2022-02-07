  int n, a[1501], p;
  cin >> n >> p;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = p; i < n; i++)
  {
    a[i-1] = a[i];
  }
  n--;
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }

//Sterge elementul aflat pe o pozitie data