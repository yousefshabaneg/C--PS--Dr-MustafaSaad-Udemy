#include <iostream>
using namespace std;
/*
 * read an integer and compute its last 3 digits
 * 15 -> 6    // ! 15 % 10 = 5  ------ 15 / 10 = 1
 * 125 -> 8
 * 1001 -> 1
 */
int main()
{
  int number, result;
  cin >> number;

  for (int i = 0; i < 3 && number != 0; i++)
  {
    result += number % 10;
    number /= 10;
  }
  cout << result;
  return 0;
}
