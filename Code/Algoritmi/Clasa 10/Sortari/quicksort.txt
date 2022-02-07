void quicksort(int v[], int st, int dr)
{
  if (st < dr)
  {
    int m = (st + dr) / 2;
    swap(v[st], v[m]);
    int i = st, j = dr, d = 0;
    while (i < j)
    {
      if (v[i] > v[j])
      {
        swap(v[i], v[j]);
        d = 1 - d;
      }
      i += d;
      j -= 1 - d;
    }
    quicksort(v, st, i - 1);
    quicksort(v, i + 1, dr);
  }
}