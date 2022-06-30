#include <iostream>
using namespace std;
/*
 * Print reminder of dividion of two numbers without modulus % operator
 * 27 / 12 -> 3
 */
int main()
{
  int n1, n2;
  cin >> n1 >> n2;
  int rem = n1 - (n1 / n2) * n2;
  cout << rem;
  return 0;
}
