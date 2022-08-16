#include <iostream>
using namespace std;
/*
    ? Right Max
    ! Given array, change each element at position i to be the maximum of numbers from i to end of array.
    ! input 1,3,5,7,4,2 -->
                        * {2}, [{4}, 2],  [{7}, 4, 2]   , [5, {7}, 4, 2]   , [3, 5, {7}, 4, 2],     [1, 3, 5, {7}, 4, 2]

    TODO: void arr_accumulate(int arr[], int len)
    TODO: input 1,3,5,7,4,2 --> [7, 7, 7, 7, 4, 2]
*/

void right_max(int arr[], int len, int start_pos = 0)
{
  if (start_pos == len - 1)
    return;

  right_max(arr, len, start_pos + 1);
  arr[start_pos] = max(arr[start_pos], arr[start_pos + 1]);
}

int main()
{
  int arr[6]{1, 3, 5, 7, 4, 2};

  right_max(arr, 6);

  for (int i = 0; i < 6; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}
