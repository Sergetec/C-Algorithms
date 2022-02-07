  int n, a[1005];
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
  }
    for (int j = n; j >= 1; j--)
    {
      if (a[j] % 2 == 0) //conditie de stergere
      {
        for (int i = j; i < n; i++)
        {
          a[i] = a[i + 1];
        }
        n--;
      }
    }
  for (int i = 1; i <= n; i++)
  {
    cout << a[i] << " ";
  }

//Sterge elementele pare
//Poate sa fie modificat oricum se doreste la linia 9