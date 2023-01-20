#include <iostream>
using namespace std;
/*
 * Read 4 numbers representing 2 intervals and
 * print their intersection interval.
 * if they don't intersect print -1

 * 1 6   3 8  => 3 6
 */

int main()
{
  int s1, e1, s2, e2;
  cin >> s1 >> e1 >> s2 >> e2;

  if (s2 > e1 || s1 > e2)
  {
    cout << "-1" << endl;
    return 0;
  }

  int start, end;

  start = (s1 > s1) ? s1 : s2;
  end = (e1 < e2) ? e1 : e2;

  cout << start << " " << end << endl;

  return 0;
}
