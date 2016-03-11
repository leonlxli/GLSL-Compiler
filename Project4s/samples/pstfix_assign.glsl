int a;

int postfix(int b)
{
  int i;

  i = b--;
  //i=2
  i += a++;
  //i=2+3
  return i + 2 * (a + b);
  //3+2*(1+4)
}