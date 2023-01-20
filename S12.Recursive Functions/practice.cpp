#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

// int factorial(int num)
// {
//   return num > 1 ? factorial(num - 1) * num : 1;
// }

//! Print Triangle of stars v1

// void print_triangle(int levels)
// {
//   if (levels == 0)
//     return;

//   for (int i = 0; i < levels; i++)
//   {
//     cout << "*";
//   }
//   cout << endl;

//   print_triangle(levels - 1);
// }

void print_3n_plus_one(int n)
{
  cout << n << " ";
  if (n == 1)
    return;

  if (n % 2 == 0)
    print_3n_plus_one(n / 2);
  else
    print_3n_plus_one(3 * n + 1);
}

int main()
{
  print_3n_plus_one(6);
  return 0;
}
