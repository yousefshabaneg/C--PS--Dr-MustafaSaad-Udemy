#include <iostream>
using namespace std;
/*
    ? Is Palindrome
    ! Function that decides if array is palindrome or not
    TODO: define its signature
*/

bool is_palindrome(int arr[], int start, int end)
{
  if (start >= end)
    return true;

  if (arr[start] != arr[end])
    return false;

  return is_palindrome(arr, start + 1, end - 1);
}
bool is_palindrome(int arr[], int end)
{
  if (end <= 0)
    return true;

  if (arr[0] != arr[end])
    return false;

  return is_palindrome(arr + 1, end - 2);
}

int main()
{
  int n = 6;
  int arr[n]{1, 2, 3, 3, 2, 1};

  bool result = is_palindrome(arr, n - 1);
  cout << result;
  return 0;
}
