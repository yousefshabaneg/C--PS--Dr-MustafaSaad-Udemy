#include <iostream>
using namespace std;
/*
 * read an integer and compute if it is even or odd by 3 ways:
 * %2
 * /2
 * %10
 */
int main()
{
  int number;
  cin >> number;

  bool is_even1, is_even2, is_even3;

  is_even1 = number % 2 == 0;

  double div2 = number / 2.0;
  is_even2 = (div2 - (int)div2) == 0;

  double last_digit = number % 10;
  is_even3 = last_digit == 0 || last_digit == 2 || last_digit == 4 || last_digit == 6 || last_digit == 8;

  cout << "1: " << is_even1 << endl;
  cout << "2: " << is_even2 << endl;
  cout << "3: " << is_even3 << endl;

  return 0;
}
