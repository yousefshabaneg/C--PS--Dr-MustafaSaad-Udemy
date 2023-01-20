#include <iostream>
using namespace std;
/*
    ? Count Primes
    ! Compute how many primes between start & end, inclusive indices

    TODO: int count_primes(int start, int end)
    TODO: Don't USE LOOPS

    * input
      * 10 20 => 4   --> 10,{11},12,{13},14,15,16,{17},18,{19},20
      * 10 200 => 42

*/

bool is_prime(int m, int cur_test_number = 3)
{
  if (m == 2)
    return true;

  if (m <= 1 || m % 2 == 0)
    return false;

  if (m == cur_test_number)
    return true;

  if (m % cur_test_number == 0)
    return false;

  return is_prime(m, cur_test_number + 1);
}

int count_primes(int start, int end)
{
  if (start > end)
    return 0;

  /*
    10 ==> 0
    11 ==> 1
    12 ==> 0
    13 ==> 1
    14 ==> 0
    15 ==> 0
    16 ==> 0
    17 ==> 1
    18 ==> 0
    19 ==> 1
    20 ==> 0
    21 ==> 0
    = 1 + 1 + 1 +1 = 4
  */
  int result = count_primes(start + 1, end);
  if (is_prime(start))
    result += 1;

  return result;
}

int main()
{
  int primes = count_primes(10, 200);
  cout << primes;
  return 0;
}
