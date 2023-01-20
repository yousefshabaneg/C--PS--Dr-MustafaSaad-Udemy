#include <iostream>
using namespace std;
// * Print fraction part of division of 2 numbers
int main()
{
  double n1, n2;
  cin >> n1 >> n2;
  double res = n1 / n2;
  cout << res - int(res) << endl;

  return 0;
}
