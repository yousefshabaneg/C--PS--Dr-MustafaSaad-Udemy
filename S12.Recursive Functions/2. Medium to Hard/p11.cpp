#include <iostream>
using namespace std;
/*
    ? Prefix Sum
    ! Function that sums only the first n elements in an array
    TODO: define its signature
    TODO: input [1, 3, 4, 6, 7] , 3 --> 1+3+4 = 8
*/

int prefix_sum(int arr[], int cnt)
{
  if (cnt == 0)
    return 0;

  return arr[cnt - 1] + prefix_sum(arr, cnt - 1);

  // arr[2] + prefix(arr, 2)
  // arr[2] + arr[1]        + prefix(arr, 1)
  // arr[2] + arr[1]        + arr[0]        + prefix(arr, 0)
}

int main()
{
  int n = 6;
  int arr[n]{1, 3, 5, 7, 4, 2};

  int result = prefix_sum(arr, 3);
  cout << result << endl;
  return 0;
}
