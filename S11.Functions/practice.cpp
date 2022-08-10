#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

void f()
{
  static int s{};
  cout << s;
  s += 2;

  // 1 2 3 1 4 6 1 6 9 9
}

int main()
{
  for (int i = 0; i < 3; ++i, f())
    ;
  return 0;
}
