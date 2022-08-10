#include <iostream>
using namespace std;
/*
    ? Is Palindrome Array ?
    ! Read N, then N integers for an array. call a function with the array to check of the array is palindrome or note.

    /* Solved before in S8. Easy .. p4

    * read integer n , followed by reading integers
    * an array is called palindrome if it reads the same backward and forward.
    * arrays {1} and {1,2,3,2,1} are palindrome.
    *  5  1 3 2 3 1  -->   YES
    *  4  1 2 3 4    -->   NO


*/

void read_array(int arr[], int len)
{
  for (int i = 0; i < len; i++)
    cin >> arr[i];
}

bool is_palindrome(int arr[], int len)
{

  for (int i = 0; i < len / 2; i++)
    if (arr[i] != arr[len - i - 1])
      return false;

  return true;
}

int main()
{
  int n;
  cin >> n;
  int arr[n];

  read_array(arr, n);

  cout << is_palindrome(arr, n);

  return 0;
}
