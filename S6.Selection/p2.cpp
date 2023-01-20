#include <iostream>
using namespace std;
/*
 * Read Two integers , find which of them has the biggest value and print it.
 * inputs: 1 67 -9 88 -45 129 90 65 77 34  ---> 129
 ! restriction : code should be 2 integer variables defined only
 */

int main()
{
  int cnt;
  cin >> cnt;

  int n, max = INT_MIN;
  for (int i = 0; i < cnt; i++)
  {
    cin >> n;
    if (n > max)
      max = n;
  }

  cout << max;

  return 0;
}
