void decrypt(char a[], int poz)
{
  for (int i = 0; a[i] != '\0'; ++i)
  {
    if (a[i] >= 'a' && a[i] <= 'z')
    {
      a[i] = a[i] - poz;
      if (a[i] < 'a')
      {
        a[i] += 'z' - 'a' + 1;
      }
    }
    else if (a[i] >= 'A' && a[i] <= 'Z')
    {
      a[i] = a[i] - poz;
      if (a[i] < 'A')
      {
        a[i] += 'Z' - 'A' + 1;
      }
    }
  }
}