#include <iostream>
using namespace std;
/*
    ? Set-Powers ?
    ! Implement the following 2 functions .
    TODO: bool is_prime(int num);
      * return true if number is prime;

    TODO: int nth_prime(int n);
      * return the n-th prime number. it should use is_prime function;

    *E.G nth_prime(6) = 13;
        * recall: 2, 3, 5, 7, 11, {13}, 17, 19


*/

bool is_prime(int num)
{
  if (num == 2)
    return true;

  if (num % 2 == 0 || num <= 1)
    return false;

  for (int i = 3; i < num; i++)
    if (num % i == 0)
      return false;

  return true;
}

int nth_prime(int n)
{
  if (n <= 0)
    return -1;

  for (int i = 2;; i++)
  {
    if (is_prime(i))
    {
      n--;
      if (n == 0)
        return i;
    }
  }

  return -1;
}
int main()
{
  cout << nth_prime(0);
  return 0;
}
