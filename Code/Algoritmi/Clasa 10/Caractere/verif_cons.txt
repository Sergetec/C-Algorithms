bool voc(char ch)
{
  return (strchr("AEIOUaeiou", ch) != NULL);
}

bool cons(char ch)
{
  return ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) && !voc(ch);
}