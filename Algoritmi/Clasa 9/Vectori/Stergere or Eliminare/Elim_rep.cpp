  int n, a[1000];
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
  }
  for (int i = 1; i <= n; i++)
  {
    for (int j = i + 1; j <= n; j++)
    {
      if (a[j] == a[i])
      {
        for (int k = j + 1; k <= n; k++)
        {
          a[k-1] = a[k];
        }
        n--;
        j--;
      }
    }
  }
  for (int i = 1; i <= n; i++)
  {
    cout << a[i] << " ";
  }

//Sterge elementele care se repeta