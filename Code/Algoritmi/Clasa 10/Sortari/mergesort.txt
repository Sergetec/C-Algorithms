const int N = 100001;

int aux[N], a[N];

void mergesort(int v[], int st, int dr)
{
  if (st < dr)
  {
    int m = (st + dr) / 2;
    mergesort(v, st, m);
    mergesort(v, m + 1, dr);
    //Interclasare
    int i = st, j = m + 1, k = 0;
    while (i <= m && j <= dr)
    {
      if (v[i] < v[j])
      {
        aux[++k] = v[i++];
      }
      else
      {
        aux[++k] = v[j++];
      }
    }
    while (i <= m)
    {
      aux[++k] = v[i++];
    }
    while (j <= dr)
    {
      aux[++k] = v[j++];
    }
    for (i = st, j = 1; i <= dr; ++i, ++j)
    {
      v[i] = aux[j];
    }
  }
}