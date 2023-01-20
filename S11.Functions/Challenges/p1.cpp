#include <iostream>
using namespace std;
/*
    ? Max of 6 numbers ?
    ! Write a function that reads 6 numbers and compute their maximum , Create the following:

    TODO: max(int a, int b, int c)
    TODO: max(int a, int b, int c, int d)
    TODO: max(int a, int b, int c, int d, int e)
    TODO: max(int a, int b, int c, int d, int e, int f)

*/

int max(int a, int b, int c)
{
  return max(a, max(b, c));
}

int max(int a, int b, int c, int d)
{
  return max(a, max(b, c, d));
}

int max(int a, int b, int c, int d, int e)
{
  return max(a, max(b, c, d, e));
}

int max(int a, int b, int c, int d, int e, int f)
{
  return max(a, max(b, c, d, e, f));
}

int main()
{
  cout << max(1, 2, 5, 10, 25, 30);
  return 0;
}
