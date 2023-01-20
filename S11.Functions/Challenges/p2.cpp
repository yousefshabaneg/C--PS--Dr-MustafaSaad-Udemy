#include <iostream>
using namespace std;
/*
    ? Reverse a string ?
    ! Write a function that do reverse for the string.:

    TODO: string reverse_str(const string &str);

*/

string reverse_str(const string &str)
{
  string result = str;
  int len = str.size();

  for (int i = 0; i < str.size() / 2; i++)
  {
    int end = len - i - 1;

    char temp = result[i];
    result[i] = result[end];
    result[end] = temp;
  }

  return result;
}

int main()
{
  cout << reverse_str("abcde");
  return 0;
}
