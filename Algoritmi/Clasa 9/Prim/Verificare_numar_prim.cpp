//Varianta cu bool
bool prim(int n)
{
  if (n <= 1)
  {
    return false;
  }
  else if (n != 2 && n % 2 == 0)
  {
    return false;
  }
  for (int i = 3; i * i <= n; i += 2)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}


//Varianta cu int


int prim(int n)
{
  if (n <= 1)
  {
    return 0;
  }
  else if (n != 2 && n % 2 == 0)
  {
    return 0;
  }
  for (int i = 3; i * i <= n; i += 2)
  {
    if (n % i == 0)
    {
      return 0;
    }
  }
  return 1;
}
