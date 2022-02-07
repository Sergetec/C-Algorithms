void encrypt(char a[], int poz)
{
  for (int i = 0; a[i] != '\0'; ++i)
  {
    if (a[i] >= 'a' && a[i] <= 'z')
    {
      int nr = a[i] + poz;
      if (nr > 'z')
      {
        a[i] = nr - 'z' + 'a' - 1;
      }
      else
      {
        a[i] = nr;
      }
    }
    else if (a[i] >= 'A' && a[i] <= 'Z')
    {
      int nr = a[i] + poz;
      if (nr > 'Z')
      {
        a[i] = nr - 'Z' + 'A' - 1;
      }
      else
      {
        a[i] = nr;
      }
    }
  }
}