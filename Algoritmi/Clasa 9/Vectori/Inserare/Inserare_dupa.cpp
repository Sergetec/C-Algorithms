  int n, a[51];
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
  }
  for (int i = 1; i <= n; i++)
  {
    int ca = a[i];
    if (a[i] % 2 == 0) //conditie de inserare
    {
      n++;
      for (int j = n; j > i + 1; j--)
      {
        a[j] = a[j - 1];
      }
      a[i + 1] = 2 * ca;
      i++;
    }
  }
  for (int i = 1; i <= n; i++)
  {
    cout << a[i] << " ";
  }

//Se insereaza dupa fiecare element par dublul sau