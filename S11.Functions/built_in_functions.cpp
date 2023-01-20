#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
  cout << abs(-2) << endl;    // 2
  cout << fabs(-2.5) << endl; // 2.5

  cout << ceil(2.4) << endl;   // 3
  cout << floor(2.4) << endl;  // 2
  cout << ceil(-2.4) << endl;  // -2 to the greater
  cout << floor(-2.4) << endl; // -3 to the smaller

  cout << round(2.4) << endl;  // 2
  cout << round(2.5) << endl;  // 3
  cout << round(2.6) << endl;  // 3
  cout << round(-2.6) << endl; //-3
  cout << round(-2.4) << endl; //-2

  cout << sqrt(16) << endl; // 4

  // All of these funcitons return 0 if false , and any integer >= 1 for truthy.
  cout << isalpha('A') << endl; // >=1 = true for any alphabetic char
  cout << isalpha('#') << endl; // 0
  cout << isdigit('3') << endl; // >=1
  cout << isdigit('A') << endl; // 0
  cout << isupper('A') << endl; // >=1
  cout << islower('a') << endl; // >=1

  cout << (char)tolower('X') << endl; // x
  cout << (char)toupper('y') << endl; // Y

  cout << max(5, 9) << endl;   // 9
  cout << pow(2, 4) << endl;   // 16
  cout << log2(16) << endl;    // 4
  cout << log10(1000) << endl; // 3

  cout << (double)rand() << endl;
  cout << RAND_MAX << endl; // 32767
  cout << (double)rand() / RAND_MAX << endl;
  return 0;
}
