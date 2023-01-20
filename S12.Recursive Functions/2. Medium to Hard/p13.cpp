#include <iostream>
using namespace std;
/*
    ? Is Prefix
    ! Function that decides if the string is prefixed with prefix str
    TODO: bool is_prefix(string main, string prefix, int start_pos = 0)
    Todo: is_prefix('abcdefgh', 'abcd') => true
    Todo: is_prefix('abcdefgh', '') => true
    Todo: is_prefix('abcdefgh', 'abd') => false
*/

bool is_prefix(string main, string prefix, int start_pos = 0)
{
  if (start_pos == prefix.length())
    return true;

  if (main[start_pos] != prefix[start_pos])
    return false;

  return is_prefix(main, prefix, start_pos + 1);
}

int main()
{
  int n = 6;
  int arr[n]{1, 2, 3, 3, 2, 1};

  string x = "Yousef";
  string y = "you";
  bool result = is_prefix(x, y);
  cout << result << endl;
  return 0;
}
