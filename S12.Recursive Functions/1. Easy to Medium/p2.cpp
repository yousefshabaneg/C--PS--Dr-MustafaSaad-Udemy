#include <iostream>
using namespace std;
/*
    ? Power Function.
    ! return value × value... × value -> p times

    TODO: int my_pow(int value, int p = 2)
    TODO: E.g my_pow(7,3) ==> 343
    //* 7 * 7 * 7 = 343

*/

int my_pow(int value, int p = 2)
{
  if (p == 0)
    return 1;

  return value * my_pow(value, p - 1);

  /* for v = 7, p = 3

    1- return 7 * my_pow(7, 2);
    2- return 7 *     7       * my_pow(7, 1)
    3- return 7 * 7 * 7 *     * my_pow(7, 0);
    3- return 7 * 7 * 7 *  1;
*/
}

int main()
{
  cout << my_pow(7, 2);
  return 0;
}
