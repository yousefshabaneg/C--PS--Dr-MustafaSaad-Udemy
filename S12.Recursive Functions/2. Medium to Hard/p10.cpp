#include <iostream>
using namespace std;
/*
    ? Suffix Sum
    ! Function that sums only the last n elements in an array
    TODO: define its signature
    TODO: input [1, 3, 4, 6, 7] , 3 --> 7+6+4 = 17
*/

int suffix_sum(int arr[], int len, int cnt)
{
  if (cnt == 0)
    return 0;

  return arr[len - 1] + suffix_sum(arr, len - 1, cnt - 1);

  // arr[4] + suffix(arr, 4, 2)
  // arr[4] + arr[3]          + suffix(arr, 5, 1)
  // arr[4] + arr[3]          + arr[2] + suffix(arr, 5 , 0)
  // arr[4] + arr[3]          + arr[2] + 0
}

int main()
{
  int n = 5;
  int arr[n]{1, 3, 4, 6, 7};

  int result = suffix_sum(arr, n, 3);
  cout << result;
  return 0;
}
