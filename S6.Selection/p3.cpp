#include <iostream>
using namespace std;
/*
 * Read number X then read 6 numbers [s1,e1]  [s2,e2]  [s3,e3]   each two is interval [start, end]
 *  number X in a range if --> start <= X <= end

 * 7   [1 10]   5 6   [4 40]  => 2
 */

int main()
{
  int x, s, e, result;
  cin >> x;

  cin >> s >> e;
  result += (x >= s && x <= e);

  cin >> s >> e;
  result += (x >= s && x <= e);

  cin >> s >> e;
  result += (x >= s && x <= e);

  cout << result;

  return 0;
}
