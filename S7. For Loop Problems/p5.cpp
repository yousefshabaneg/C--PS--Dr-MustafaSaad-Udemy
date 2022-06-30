#include <iostream>
using namespace std;

/*  Print Primes

    Read an Integer N (< 500) and All prime numbers <= N

    prime number --> number % anyNumber != 0
    INPUT  --> 24
    OUTPUT -->  2,3,5,7,11,13,17,19,23
*/
int main()
{
  int N;
  cin >> N;
  bool first_print = true;
  for (int num = 2; num <= N; num++)
  {
    bool isPrime = true;
    for (int i = 2; i < num; i++)
    {
      if (num % i == 0)
      {
        isPrime = false;
        break;
      }
    }
    if (isPrime)
    {
      if (!first_print)
        cout << ",";
      cout << num;
      first_print = false;
    }
  }

  return 0;
}
